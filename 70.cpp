class Solution {
public:
    array<int,46> mem;
    int climbStairs(int n) {
        if(n < 0){
            return 0;
        }
        
        if(n == 0){
            return 1;
        }
        
        if(mem.at(n) != 0){
            return mem.at(n);
        }
        
        return mem.at(n) = (climbStairs(n - 2) + climbStairs(n - 1));
    }
};
