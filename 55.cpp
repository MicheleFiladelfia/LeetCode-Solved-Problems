class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReachable = 0;
        int current = 0;
        for(int i = 0 ; i < nums.size(); i++){
            if(maxReachable < i){
                break;    
            }
            
            current = i + nums.at(i);
            if(current > maxReachable){
                maxReachable = current;
            }
        }
        
        return maxReachable>=nums.size()-1?true:false;
    }
};
