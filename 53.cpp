class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums.at(0);
        int curr = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            curr += nums.at(i);

            if(curr > max)
                max = curr;
                    
            if(curr < 0)
                curr = 0;
            
            
        }
        
        return max;
    }
};
