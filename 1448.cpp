class Solution {
private:
    int dfs(TreeNode* cur, int maxVal){
        if(cur == nullptr){
            return 0;
        }

        int count = 0;
        
        if(cur -> val >= maxVal){
            count++;
        }
        
        count += dfs(cur->left,max(cur->val,maxVal));
        count += dfs(cur->right,max(cur->val,maxVal));

        return count;
    }
public:
    int goodNodes(TreeNode* root) {
        return dfs(root,numeric_limits<int>::min());
    }
};
