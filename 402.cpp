class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        string ans = "";

        if(num.length() <= k)
            return "0";
        
        if(k == 0){
            return num;
        }

        s.push(num[0]);

        for(int i = 1 ; i < num.length() ; i++){
            while(k > 0 && !s.empty() && num.at(i)< s.top()){
                s.pop();
                k--;
            }

            s.push(num[i]);

            if(s.size() == 1 && s.top() == '0')
                s.pop();
        }

        while(k && !s.empty()){
            --k;
            s.pop();
        }
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        if(ans.length() == 0)
            return "0";
        
        return ans;
    }
};
