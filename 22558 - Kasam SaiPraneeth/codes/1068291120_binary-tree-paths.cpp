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
vector<string> result;
// path is a string represents the path form root to the current node
//
    void treepath(TreeNode* root,string path){
        if(!root) {
            return;
        }
        path += to_string(root->val);

        //if the current node is the leaf node then path is added to the result,
        //this represents the complete path from root to a leaf node
        if(!root->left && !root->right){
            result.push_back(path);
        }
        // if the current node is not leaf node the recurseivly left and right child of the current
        // is called
        else{ 
            path += "->";
            treepath(root->left,path);
            treepath(root->right,path);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) {
            return{};
        }
        treepath(root,"");
        return result;
    }
};
