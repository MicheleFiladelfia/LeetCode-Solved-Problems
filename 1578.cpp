class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int maxTime = 0, ans = 0;

        for(int i = 0 ; i < colors.size(); i++){
            if(i > 0 && colors[i-1] != colors[i])
                maxTime = 0;

            ans += min(maxTime,neededTime[i]);
            maxTime = max(maxTime, neededTime[i]);

            cout<<i<<endl;
            cout<<ans<<endl;
            cout<<maxTime<<endl<<endl;
        }

        return ans;
    }
};