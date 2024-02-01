class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> q;
        if(root == NULL)
            return 0;
        q.push(root);
        int depth = 0;

        while(!q.empty()){
            int s = q.size();
            for(int i = 0; i<s ;i++){
                TreeNode* tmp = q.front();
                q.pop();

                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
            }
            depth++;
        }
        return depth;
    }
};