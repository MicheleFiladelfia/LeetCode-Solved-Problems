class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        vector<vector<short>> DP(n + 1, vector<short>(m + 1));
        short ans = 0;
        
        for(int i = n - 1; i >= 0; i--){
            for(int j = m - 1; j >= 0; j--){
                if(nums1.at(i) == nums2.at(j)){
                    DP[i][j] = DP[i + 1][j + 1] + 1;
                    ans = max(ans,DP[i][j]);
                }
            }
        }
        
        return ans;
    }
};