class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> sorted(n);
        for(int i = 0 ; i < n ; i++){
            sorted.at(i) = {efficiency.at(i),speed.at(i)};
        }

        sort(sorted.rbegin(),sorted.rend());

        priority_queue<int,vector<int>, greater<int>> pq;

        long speedSum = 0, ans = 0;
        for(auto &[e,s] : sorted){
            speedSum += s;
            pq.push(s);

            if(pq.size() > k){
                speedSum -= pq.top();
                pq.pop();
            }

            ans = max(ans,speedSum * e);
        }

        return ans % static_cast<int>((1e9 + 7));
    }
};