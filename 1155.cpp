class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        int DP[31][1001] = { 0 };
        DP[0][0] = 1;

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= k ; j++){
                for(int t = j ; t <= target ; t++){
                    DP[i][t] = (DP[i][t] + DP[i - 1][t - j]) % 1000000007;
                }
            }
        }

        return DP[n][target];
    }
};