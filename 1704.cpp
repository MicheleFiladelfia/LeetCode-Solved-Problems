class Solution {

public:
    bool halvesAreAlike(string s) {
        #define isVowel(ch) (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

        int left = 0 ,right = 0;

        for(int i = 0 ; i < s.length()/2 ; i++){
            if(isVowel(toupper(s[i]))){
                left++;
            }
            
            if(isVowel(toupper(s[s.length() - i - 1]))){
                right++;
            }
        }

        return left == right;

        #undef isVowel
    }
};