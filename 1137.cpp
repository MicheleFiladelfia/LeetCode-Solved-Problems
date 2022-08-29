class Solution {
public:
    array<int,38> mem;
    int tribonacci(int n) {
        if(n == 0 || n == 1)
            return n;
        
        if(n == 2)
            return 1;
        
        if(mem.at(n) != 0)
            return mem.at(n);
            
        return mem.at(n) = (tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3)); 
    }
};
