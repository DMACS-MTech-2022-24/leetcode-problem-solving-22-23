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
    int idx = 0;
    int ans;
    void f(TreeNode *root, int k)
    {
        if(!root) return;
        f(root->left, k);
        if(idx == k)
            return;
        idx++;
        if(idx == k){
            ans = root->val;
            return;
        }
        f(root->right, k);
        if(idx == k)
            return;
    }
    int kthSmallest(TreeNode* root, int k) {
        idx = 0;
        f(root, k);

        return ans;
    }
};