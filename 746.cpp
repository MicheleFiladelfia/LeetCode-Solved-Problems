class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i = 2 ; i < cost.size() ; i++){
            cost.at(i) += min(cost.at(i - 1),cost.at(i - 2));
        }
        
        return min(cost.at(cost.size()-1),cost.at(cost.size()-2));
    }
};
