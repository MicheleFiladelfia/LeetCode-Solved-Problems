class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums.at(0);
        
        nums[1] = max(nums.at(0),nums.at(1));
        
        for(int i = 2;i<nums.size();i++)
            nums.at(i) = max(nums.at(i - 1) , nums.at(i - 2) + nums.at(i));
        
        return nums.at(nums.size()-1);
    }
};
