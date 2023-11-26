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
    TreeNode* bstToGst(TreeNode* root) {
        if(root == NULL)
            return NULL;

        stack<TreeNode*> s;
        TreeNode* curr = root;
        int sum = 0;
        
        while (curr != NULL || s.empty() == false) {  
            while (curr != NULL) {                 
                s.push(curr);
                curr = curr->right;
            }

            curr = s.top();
            s.pop();
            curr->val += sum;
            sum = curr->val;
            curr = curr->left;
            
        }
        return root;
    }
};