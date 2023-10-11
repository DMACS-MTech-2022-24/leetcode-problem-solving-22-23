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


struct NodeInfo {
    TreeNode *root;
    int l, r, lower_root;
};


class Solution {
public:

    vector<TreeNode *> ans;

    vector<TreeNode*> _generateTrees(int l, int r)
    {

        vector<TreeNode *>ans;
        if(l == r){
            ans.push_back(new TreeNode(l));
            return ans;
        }else if(l > r){
            ans.push_back(nullptr);
            return ans;
        }
        
        for(int i = l; i <= r; i++){
            vector<TreeNode*>left = _generateTrees(l, i - 1);
            vector<TreeNode*>right = _generateTrees(i + 1, r);

            for(TreeNode * node_i: left){
                for(TreeNode * node_j: right){
                    TreeNode *newroot = new TreeNode(i);
                    newroot->left = node_i;
                    newroot->right = node_j;
                    ans.push_back(newroot);
                }
            }
        }

        return ans;
        
    }
    vector<TreeNode*> generateTrees(int n) {
        return _generateTrees(1, n);
    }
};