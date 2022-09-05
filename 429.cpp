class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;

        if(root == nullptr){
            return ans;
        }

        queue<Node*> q;
        q.push(root);


        while(!q.empty()){
            ans.emplace_back();

            for(int i = q.size() ; i > 0 ; i--) {
                Node* curr = q.front(); q.pop();
                ans.back().push_back(curr->val);
                for (Node* child : curr->children) {
                    q.push(child);
                }
            }
        }

        return ans;
    }
};
