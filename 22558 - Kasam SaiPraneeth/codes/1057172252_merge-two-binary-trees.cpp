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
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // if booth the roots are null return null
        if(root1 == NULL && root2 == NULL) return NULL;
        
        // if both root val are not null add the val
        if(root1 != NULL && root2 != NULL){
            root1->val += root2->val;
            root1->left = mergeTrees(root1->left, root2->left);
            root1->right = mergeTrees(root1->right, root2->right);
        }
        else // if any one node is null, then returns the node which not null
            return root1? root1:root2;
        // finally return the root1 tree which is which is having the merged two
        // binary trees
        return root1;
    }
};