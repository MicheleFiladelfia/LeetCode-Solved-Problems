class Solution {
private:
    bool isOp(string str){
        return str == "+" || str == "-" || str == "*" || str == "/";
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> s;
        #define operation(op) \
            do{ \
                long a = s.top(); s.pop(); \
                long b = s.top(); s.pop(); \
                s.push(b op a); \
            }while(false)

        for(int i = 0 ; i < tokens.size() ; i++){
            string ch = tokens[i];

            if(isOp(ch)){
                switch(ch[0]){
                    case '+': operation(+); break;
                    case '-': operation(-); break;
                    case '*': operation(*); break;
                    case '/': operation(/); break;
                }
            }else{
                s.push(stoi(ch));
            }
        }

        return s.top();
    }
};