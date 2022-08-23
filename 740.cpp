class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size() == 1)
            return nums.at(0);
        
        unordered_map<int,int> dp;
        
        int max = -10001;
        for(auto x : nums){
            dp[x] += x;
            if(x > max){
                max = x;
            }
        }
        
        dp[1] = std::max(dp[0],dp[1]);
        for(int i = 2 ; i <= max ; i++){
            dp[i] = std::max(dp[i - 1], dp[i - 2] + dp[i]);
        }
        
        return dp[max];
    }
};
