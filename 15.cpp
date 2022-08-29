class Solution {
private:
    vector<int> numbers;
    vector<vector<int>> ans;
    
    void twoSum(int l, int r, int target){
        vector<int> temp(3,0);
        while(true){
            if(l >= r)
                break;
            
            if(numbers.at(l) + numbers.at(r) == target){
                temp[0] = 0 - target;
                temp[1] = numbers.at(l);
                temp[2] = numbers.at(r);
                ans.push_back(temp);
                while(l < r && temp[1] == numbers.at(l)){
                    l++;
                }
                    
                while(l < r && temp[2] == numbers.at(r)){
                    r--;
                }

            }else if(numbers.at(l) + numbers.at(r) > target)
                r--;
            else
                l++;
            
        }
        
    }

public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        numbers = nums;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums.at(i) > 0)
                break;
            
            twoSum(i + 1,nums.size()-1,0 - nums.at(i));
            
            while(i + 1 < nums.size() && nums.at(i) == nums.at(i+1))
                i++;
        }
        return ans;
    }
};
