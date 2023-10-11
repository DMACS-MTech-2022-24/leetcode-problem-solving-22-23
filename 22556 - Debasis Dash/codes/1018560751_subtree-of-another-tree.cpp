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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string rootStr = serialize(root);
        string subRootStr = serialize(subRoot);
        
        return rootStr.find(subRootStr) != string::npos;
    }
    
    string serialize(TreeNode* node) {
        if (!node)
            return "null";
        
        return "#" + to_string(node->val) + " " + serialize(node->left) + " " + serialize(node->right);
    }
};