class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root == nullptr){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            double sum = 0;

            for(int i = 0; i < size; i++){
                TreeNode* curr = q.front(); q.pop();
                sum += curr -> val;

                if(curr -> left != nullptr){
                    q.push(curr -> left);
                }

                if(curr -> right != nullptr){
                    q.push(curr-> right);
                }
            }

            ans.push_back(sum / size);
        }
        return ans;
    }
};
