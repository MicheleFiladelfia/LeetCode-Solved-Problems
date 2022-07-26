class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        unordered_map<string,int> translate{{"I",1},{"V",5},{"X",10},{"L",50},{"C",100},{"D",500},{"M",1000},{"IV",4},{"IX",9},{"XL",40},{"XC",90},{"CD",400},{"CM",900}};
        
        for(int i = 0 ; i < s.length(); i++){
            if(i != s.length() - 1 && translate.count(string() + s[i] + s[i + 1])){
                ans+=translate[string() + s[i] + s[i + 1]];
                i++;
            }else{
                ans+=translate[string(1,s[i])];
            }
        }

        return ans;
    }
};
