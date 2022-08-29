class Solution {
public:
    
    int maxSubArraySum(vector<int> arr){
        int max = numeric_limits<int>::min();
        int current = 0;

        for(int i = 0 ; i < arr.size() ; i++){
            current+=arr.at(i);

            if(current < 0)
                current = 0;
            

            if(current > max)
                max = current;
        }
        return max;
    }
    
    int maxProfit(vector<int>& prices) {
        vector<int> change(prices.size());

        change[0] = 0;
        for(int i = 1 ; i < prices.size() ; i++)
            change[i] = prices[i] - prices[i - 1];

        return maxSubArraySum(change);
    }
};
