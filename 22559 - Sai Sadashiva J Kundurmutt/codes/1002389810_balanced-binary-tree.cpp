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
    
    int isBalancedUtil(TreeNode* root)
    {
        if(root == NULL)
            return 0;

        int lheight = isBalancedUtil(root->left);
        int rheight = isBalancedUtil(root->right);
        if(lheight == INT_MAX || rheight == INT_MAX || abs(lheight - rheight) > 1){
            
            return INT_MAX;
        }
        return 1 + max(lheight, rheight);

    }
    bool isBalanced(TreeNode* root) {
      

        int x = isBalancedUtil(root);
        return x == INT_MAX ? false: true;
    }
};