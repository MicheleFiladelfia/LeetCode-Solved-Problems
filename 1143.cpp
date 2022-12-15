class Solution {
public:
    int longestCommonSubsequence(string &text1, string &text2) {
        short m[2][1000] = {};
        for(int i = 0 ; i < text1.size() ; ++i){
            for(int j = 0 ; j < text2.size() ; ++j){
                m[!(i % 2)][j + 1] = (text1[i] == text2[j]) ? m[i % 2][j] + 1 : max(m[!(i % 2)][j],m[i % 2][j + 1]);
            }
        }

        return m[text1.size()%2][text2.size()];
    }
};