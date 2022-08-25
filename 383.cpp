class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mag;
        
        for(char x : magazine)
            mag[x]++;
        
        
        for(char x : ransomNote){
            if(mag[x] - 1 >= 0){
                mag[x]--;
            }else{
                return false;
            }
        }   
        
        return true;
    }
};
