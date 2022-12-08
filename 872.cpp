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
    int dfs(stack<TreeNode*> &s){
        while(true){
            TreeNode* cur = s.top(); s.pop();
            if(cur -> left) s.push(cur -> left);
            if(cur -> right) s.push(cur -> right);
            if(!cur -> left && !cur -> right) return cur->val;
        }
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> s1,s2;
        s1.push(root1); s2.push(root2);
        while(!s1.empty() && !s2.empty()){
            if(dfs(s1) != dfs(s2)) return false;
        }

        return s1.empty() && s2.empty();
    }
};