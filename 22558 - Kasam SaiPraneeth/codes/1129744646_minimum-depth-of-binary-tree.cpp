class Solution {
public:
    int minDepth(TreeNode* root) {
        queue<TreeNode*> q;
        if(root == NULL)
            return 0;
        int depth = 1;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            for(int i = 0 ; i<s ;i++){
                TreeNode* tmp = q.front();
                q.pop();

                if(tmp->left == NULL && tmp->right == NULL) return depth;
                if(tmp->left != NULL)
                    q.push(tmp->left);
                if(tmp->right != NULL)
                    q.push(tmp->right);
            }
        ++depth;
        }
        return 0;
    }
};