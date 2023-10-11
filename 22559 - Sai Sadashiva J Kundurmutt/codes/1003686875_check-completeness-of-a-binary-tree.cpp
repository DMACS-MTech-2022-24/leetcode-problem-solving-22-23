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


    bool bfs_completeness_check(TreeNode* root)
    {
        queue<TreeNode*>q;
        q.push(root);
        int expected = 1;
        int ts = 0;
        int node_idx = 0;
        while(!q.empty()){
            TreeNode * node = q.front();
            q.pop();
            
            ts++;
            if(node->left){
                node_idx++;
                if(ts == node_idx){
                    q.push(node->left);
                }else{
                    return false;
                }
            }

            ts++;
            if(node->right){
                node_idx++;
                if(ts == node_idx){
                    q.push(node->right);
                }else{
                    return false;
                }
            }

        }
            

        return true;
    }
    bool isCompleteTree(TreeNode* root) {
        return bfs_completeness_check(root);
    }
};