class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});

        for(int i = 1 ; i < numRows ; i++){
            ans.push_back({1});
            for(int j = 0 ; j < i - 1 ; j++){
                ans.at(i).push_back(ans.at(i-1).at(j)  + ans.at(i-1).at(j+1));
            }
            ans.at(i).push_back(1);
        }
        return ans;
    }
};
