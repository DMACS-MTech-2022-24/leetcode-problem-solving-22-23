class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        if(root->left == NULL && root->right == NULL) return 1;

        int maxx = INT_MIN;
        if(root->left != NULL)
            maxx = max(maxDepth(root->left), maxx);
        
        if(root->right != NULL)
            maxx = max(maxDepth(root->right), maxx);

        return maxx + 1;
    }
};