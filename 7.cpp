class Solution {
public:
    int reverse(int x) {
       int ans = 0;
       while (x){
           int pop = x % 10;
           x /= 10;
           if ((ans > 0 && ans > INT_MAX/10) | (ans < 0 && ans < INT_MIN/10)) return 0;
           ans = ans * 10 + pop;
       }
       return ans;
   }
};

