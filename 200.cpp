class Solution {
private:
    int xedges[4] = {1,-1,0,0};
    int yedges[4] = {0,0,1,-1};
    void colorM(vector<vector<char>>& grid, int i, int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()){
            return;
        }
        
        if(grid[i][j] == '0')
            return;
        
        grid[i][j] = '0';
        
        for(int k = 0 ; k < 4 ; k++){
            colorM(grid,i + xedges[k], j + yedges[k]);
        }
    }
public:
    
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == '1'){
                    ans++;
                    colorM(grid,i,j);
                }
            }
        }
        
        return ans;
    }
};
