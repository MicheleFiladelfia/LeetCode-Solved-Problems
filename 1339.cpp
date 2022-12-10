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
    long totalSum = 0; long ans = 0;
    long sum(TreeNode* root){
        if(!root) return 0;
        long sub = root -> val + sum(root -> left) + sum(root -> right);
        ans = max(ans, sub * (totalSum - sub));
        return sub;
    }
public:
    int maxProduct(TreeNode* root) {
        totalSum = sum(root);
        sum(root);
        return ans % (int)(1e9 + 7);
    }
};