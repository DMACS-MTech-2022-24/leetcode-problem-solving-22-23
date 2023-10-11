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

 #include<bits/stdc++.h>


class Solution {
public:
    bool ans;
    int isBalancedUtil(TreeNode* root)
    {
        if(root == NULL)
            return 0;

        int lheight = isBalancedUtil(root->left);
        int rheight = isBalancedUtil(root->right);
        if(abs(lheight - rheight) > 1){
            ans = false;
            return 0;
        }
        return 1 + max(lheight, rheight);

    }
    bool isBalanced(TreeNode* root) {
        ans = true;

        isBalancedUtil(root);
        return ans;
    }
};