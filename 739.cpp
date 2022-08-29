class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> ans(size); 
        int hottest = 0;
        
        for(int current = size - 1 ; current >= 0 ; current--){
            int currentTemp = temperatures.at(current);
            
            if (currentTemp >= hottest) {
                hottest = currentTemp;
                continue;
            }
            
            int days = 1;
            while(temperatures.at(current + days) <= currentTemp){
                days += ans.at(current + days);
            }
            ans.at(current) = days;
        }
        
        
        return ans;
    }
};
