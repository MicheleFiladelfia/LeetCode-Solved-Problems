class Solution {
public:
    string reverseWords(string s) {
        int index = 0;
        
        do{
            int spaceIndex = s.find(' ', index);
            reverse(s.begin() + index,s.begin() + spaceIndex);
            index = spaceIndex + 1;
        }while(s.find(' ', index) != std::string::npos);
        reverse(s.begin() + index,s.end());
        
        return s;
    }
};