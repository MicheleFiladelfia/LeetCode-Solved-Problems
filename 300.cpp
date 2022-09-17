class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> DP;

        for(int i = 0 ; i < nums.size() ; i++){
            auto it = lower_bound(DP.begin(),DP.end(),nums[i]);
            if(it == DP.end()){
                DP.push_back(nums[i]);
            }else{
                *it = nums[i];
            }
        }

        return DP.size();
    }
};
