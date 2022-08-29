class Solution {
public:
    array<int,31> mem;
    int fib(int n) {
        if(n == 0 || n == 1)
            return n;
        
        if(mem.at(n) != 0)
            return mem.at(n);
        
        return mem.at(n) = (fib(n - 1) + fib(n - 2));
    }
};
