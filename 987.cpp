class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> ordered;
        vector<vector<int>> ans;
        dfs(root,0,0,ordered);
        for(auto row : ordered){
            vector<int> columns;
            for(auto col : row.second){
                columns.insert(columns.end(),col.second.begin(),col.second.end());
            }
            ans.push_back(columns);
        }
        return ans;
    }

    void dfs(TreeNode* root, int row,  int col, map<int,map<int,multiset<int>>>& ordered){
        if(root == nullptr){
            return;
        }

        ordered[row][col].insert(root -> val);


        dfs(root -> left, row-1, col+1, ordered);
        dfs(root -> right, row+1, col+1, ordered);
    }
};
