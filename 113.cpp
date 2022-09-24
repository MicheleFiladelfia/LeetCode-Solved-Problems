class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root,{},targetSum);
        return ans;
    }
    
    void dfs(TreeNode* root ,vector<int> path, int targetSum){
        if(root == nullptr)
            return;
        
        path.push_back(root->val);
        if(root -> left == nullptr && root -> right == nullptr){
            int sum = 0;
            
            for(auto x : path){
                sum += x;
            }
            
            if(sum == targetSum){
                ans.push_back(path);
            }
        }
        
        dfs(root -> left,path,targetSum);
        dfs(root -> right,path,targetSum);
    }
    
    
};