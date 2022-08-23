class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1){
            return nums.at(0);
        }
        return max(rob(nums,1, nums.size()),rob(nums,0,nums.size()-1));
    }
private:
    int rob(vector<int> nums, int start, int finish){
        if(finish - start == 1)
            return nums.at(start);
        
        nums.at(start + 1) = max(nums.at(start),nums.at(start + 1));
        
        for(int i = start + 2;i<finish;i++)
            nums.at(i) = max(nums.at(i - 1) , nums.at(i - 2) + nums.at(i));
        
        return nums.at(finish-1);
    }
};
