class Solution {
private:
    vector<vector<int>> DP;
    int maximumScoreRec(int cur, vector<int>& nums, vector<int>& multipliers, int start, int end){
        if(DP[cur][start] != INT_MIN){
            return DP[cur][start];
        }

        if(cur > multipliers.size() - 1){
            return 0;
        }

        int s = nums.at(start) * multipliers.at(cur) + maximumScoreRec(cur + 1, nums, multipliers, start + 1, end);
        int e = nums.at(end) * multipliers.at(cur) + maximumScoreRec(cur + 1, nums, multipliers, start, end - 1);

        return DP[cur][start] = max(s,e);
    }
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int m = multipliers.size();
        DP.resize(m + 1, vector<int>(m + 1, INT_MIN));
        return maximumScoreRec(0,nums,multipliers,0,nums.size()-1);
    }
};