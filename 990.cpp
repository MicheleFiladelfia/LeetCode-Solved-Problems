class Solution {
private:
    vector<int> uf;
    
    int find(int x){
        if(x != uf[x]){
            return uf[x] = find(uf[x]);    
        }   
        
        return uf[x];
    }
    
public:
    bool equationsPossible(vector<string>& equations) {
        uf.resize(26);
        
        for(int i = 0 ; i < 26 ; i++){
            uf[i] = i;
        }
        
        for(auto exp : equations){
            if(exp[1] == '='){
                uf[find(exp[0] - 'a')] = find(exp[3] - 'a');
            }
        }
        
        
        for(int i = 0; i < 26 ; i++){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto x : uf){
            cout<<x<<" ";
        }
        
        
        for(auto exp : equations){
            if(exp[1] == '!' && find(exp[0] - 'a') == find(exp[3] - 'a'))
                return false;
        }
        
        
        return true;
    }
};