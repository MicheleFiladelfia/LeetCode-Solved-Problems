class Solution {
public:
    bool isPalindrome(int x) {
        int tmp = x;
        long reversed = 0;
        
        while(tmp){
            reversed = (reversed * 10) + (tmp % 10);
            tmp/=10;
        }
        
        return reversed == abs(x);
    }
};
