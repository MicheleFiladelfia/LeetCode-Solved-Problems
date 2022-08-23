using su = short unsigned;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0)
            return 0;
        
        unordered_map<char,su> HM;
        su best = 1, lastv = 1, sum = 1;
        
        HM[s[0]] = 1;
        
        for(su i = 2 ; i <= s.length() ; i++){
            if(!HM.count(s[i-1]) || lastv > HM[s[i - 1]]) {
                HM[s[i-1]] = i;
                sum++;
            }else{
                lastv = HM[s[i - 1]];
                sum = i - lastv; //lastv is the start of the current substring
                HM[s[i-1]] = i;
            }
            best = max(best,sum);
        }
        
        return best;
    }
};