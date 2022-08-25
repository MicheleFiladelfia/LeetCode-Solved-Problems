class Solution {
public:
    string intToRoman(int num) {
        vector<string> units = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        vector<string> tens = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        vector<string> hundreds = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        vector<string> miles = {"","M","MM","MMM"};
        
        return miles[num / 1000] + hundreds[num % 1000 / 100] + tens[(num % 100 - num % 10) / 10] + units[num % 10];
    }
};
