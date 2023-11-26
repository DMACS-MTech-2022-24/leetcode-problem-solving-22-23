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
    int c=0;
    void dfs(TreeNode* root,int tmp){
        if(root==NULL)
            return;
        dfs(root->left,tmp+1);
        if(c<tmp)
            c=tmp;
        dfs(root->right,tmp+1);
    }
    int maxDepth(TreeNode* root) {
        dfs(root,0);
        if(c==0){
            if(root!=NULL&&(root->left==root->right)&&root->left==NULL)
                return 1;
            else return 0;
        }
        return c+1;
    }
};