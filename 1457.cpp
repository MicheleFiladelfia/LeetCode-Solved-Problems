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
public:
    int pseudoPalindromicPaths (TreeNode* root, int bitVec = 0) {
        if(!root)
            return 0;
        
        if(!root->left&&!root->right){
            return __builtin_popcount(bitVec^(1<<root->val))<=1;
        }
        
        return pseudoPalindromicPaths(root->left,bitVec^(1<<root->val))+pseudoPalindromicPaths(root->right,bitVec^(1<<root->val));	
    }
};