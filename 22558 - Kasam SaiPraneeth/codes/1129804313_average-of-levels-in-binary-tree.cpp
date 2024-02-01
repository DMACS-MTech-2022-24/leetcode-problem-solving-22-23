class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> ans;
        if(root == NULL)
            return ans;
        q.push(root);
        double avg = 0;

        while(!q.empty()){
            int s = q.size();
            for(int i =0; i<s ;i++){
                TreeNode* tmp = q.front();
                q.pop();

                if(tmp->left != NULL)
                    q.push(tmp->left);
                if(tmp->right != NULL)
                    q.push(tmp->right);
                avg += tmp->val; 
            }
            ans.push_back(avg/s);
            avg = 0;
        }
        return ans;
    }
};