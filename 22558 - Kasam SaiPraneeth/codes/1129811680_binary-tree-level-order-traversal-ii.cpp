class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)
            return {};
        queue<TreeNode*> q;
        int size;
        q.push(root);

        while (!q.empty()){
            size = q.size();
            vector<int> t;
            for (int i = 0; i<size ;i++){
                TreeNode* tmp = q.front();
                q.pop();
                t.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
            result.push_back(t);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};