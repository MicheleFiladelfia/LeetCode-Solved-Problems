class Solution {
private:
    bool removeZeros(TreeNode* root){
        if(!root){
            return 0;
        }
        
        bool left = removeZeros(root->left);
        bool right = removeZeros(root->right);
        
        if(left == 0){
            root->left = nullptr;
        }
        
        if(right == 0){
            root->right = nullptr;
        }
        
        return root->val + left + right;
    }
public:
    TreeNode* pruneTree(TreeNode* root, bool ones = false) {
        root = (removeZeros(root) == 0) ? nullptr : root;
        return root;
    }
};
