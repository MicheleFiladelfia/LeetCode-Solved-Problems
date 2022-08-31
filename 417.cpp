class Solution {
private:
    int m,n;
    vector<pair<int,int>> moves = {{1,0},{-1,0},{0,1},{0,-1}};

    void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited,int height, int i, int j){
        if(i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || grid[i][j] < height)
            return;

        visited[i][j] = true;

        for(auto x : moves){
            dfs(grid,visited,grid[i][j],i + x.first,j + x.second);
        }
    }

public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();
        vector<vector<bool>> pacific(m,vector<bool>(n));
        vector<vector<bool>> atlantic(m,vector<bool>(n));

        for(int i = 0 ; i < m ; i++){
            dfs(heights, pacific,heights[i][0],i, 0);
            dfs(heights, atlantic,heights[i][n-1],i, n-1);
        }

        for(int i = 0 ; i < n ; i++){
            dfs(heights, pacific,heights[0][i],0, i);
            dfs(heights, atlantic,heights[m-1][i],m-1, i);
        }

        vector<vector<int>> ans;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(pacific[i][j] && atlantic[i][j]){
                    ans.push_back({i,j});
                }
            }
        }

        return ans;
    }
};
