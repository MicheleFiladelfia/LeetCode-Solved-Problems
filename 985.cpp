class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int evenSum = 0;
        for(auto x : nums){
            if(x % 2 == 0){
                evenSum += x;
            }
        }
        
        vector<int> ans;
        for(auto query : queries){            
            if(nums[query[1]] % 2 == 0){
                evenSum -= nums[query[1]];
            }
            
            nums[query[1]] += query[0];
            
            if(nums[query[1]] % 2 == 0){
                evenSum += nums[query[1]];
            }
            
            ans.push_back(evenSum);
        }
        
        return ans;
    }
};