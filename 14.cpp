class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1)
            return strs[0];
        
        for(auto x : strs){
            if(x.length() < 1){
                return "";
            }
        }

        sort(strs.begin(),strs.end());
        
        string ans = "";
            
        while(strs[0][ans.length()] == strs[strs.size()-1][ans.length()]){
            ans+=strs[0][ans.length()];

            if(ans.length() > strs[strs.size()-1].length()-1){
                break;
            }
        }
        
        
        return ans;
    }
};
