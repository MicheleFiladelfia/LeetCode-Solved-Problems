class Solution {
public:
    int numDecodings(string s) {
        if(s[0] == '0'){
            return 0;
        }
        vector<int> dp(s.size()+1);

        dp[0] = 1; 
        dp[1] = (s[0] != '0');

        for(int i = 2 ; i <= s.size() ; i++){
            dp[i] = 0;

            //in the case of 1-char character
            if(s[i-1] != '0'){
                dp[i] += dp[i-1];
            }

            //in the case of 2-char character
            if(stoi(s.substr(i-2,2)) <= 26 && stoi(s.substr(i-2,2)) >= 10 && s[i-2] != 0){
                dp[i] += dp[i-2];
            }
        }

        return dp[s.size()];
    }
};
