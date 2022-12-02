class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }

        vector<int> occ1(26,0),occ2(26,0);

        for(int i = 0 ; i < word1.size() ; i++){
            occ1[word1[i] - 'a']++;
            occ2[word2[i] - 'a']++;
        }
        
        for(int i = 0 ; i < occ1.size() ; i++){
            if((occ1[i] && !occ2[i]) || (!occ1[i] && occ2[i])){
                return false;
            }
        }

        sort(occ1.begin(), occ1.end());
        sort(occ2.begin(), occ2.end());

        return occ2 == occ1;
    }
};