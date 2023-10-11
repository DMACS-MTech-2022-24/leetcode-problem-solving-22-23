/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root){
            if((root->val>p->val&&root->val<q->val)||(root->val<p->val&&root->val>q->val))
                return root;
            if(root->val>=p->val&&root->val>=q->val){
                if(root->val==p->val||root->val==q->val)
                    return root;
                root=root->left;
            }
            else{
                if(root->val==p->val||root->val==q->val)
                    return root;
                root=root->right;
            } 
        }
        return root;
    }
};