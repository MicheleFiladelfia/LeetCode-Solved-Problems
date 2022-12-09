/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int dfs(TreeNode* root, int min, int max){
        if(root == nullptr) return max - min;
        min = std::min(min,root->val);
        max = std::max(max,root->val);
        return std::max(dfs(root -> left,min,max), dfs(root -> right,min,max));
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        return dfs(root,root->val,root-> val);
    }
};