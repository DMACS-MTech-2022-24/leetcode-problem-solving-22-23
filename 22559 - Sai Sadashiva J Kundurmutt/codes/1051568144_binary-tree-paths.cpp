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
    vector<string>ans;

    void preorder(TreeNode *root, string curr)
    {
        stringstream ss;
        if(!root->left && !root->right){
            ss << curr << root->val;
            ans.push_back(ss.str());
        }
        ss << curr << root->val;
        if(root->left || root->right)
            ss << "->";
        if(root->left){
            
            preorder(root->left, ss.str());
        }
        if(root->right){
            
            preorder(root->right, ss.str());
        }
            
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root)   return vector<string>();
        if(ans.size())
            ans.clear();
        
        preorder(root, "");
        return ans;
    }
};