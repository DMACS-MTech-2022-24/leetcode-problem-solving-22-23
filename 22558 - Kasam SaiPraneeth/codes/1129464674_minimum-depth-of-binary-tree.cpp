class Solution {
public:
    int minDepth(TreeNode* root) {
         if(root == NULL) 
            return 0;
        if(root->left == NULL && root->right == NULL) return 1;
        
        int minn = INT_MAX;
        if(root->left != NULL)
            minn = min(minDepth(root->left), minn);
        
        if(root->right != NULL)
            minn = min(minDepth(root->right), minn);

        return minn + 1;
    }
};