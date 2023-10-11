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
    vector<vector<int>> v;
    void tmp(TreeNode* root,int a){
        if(root==NULL)
            return;
        if(v.size()==a)
            v.push_back(vector<int>());
        v[a].push_back(root->val);
        tmp(root->left,a+1);
        tmp(root->right,a+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        tmp(root,0);
        return v;
    }
};