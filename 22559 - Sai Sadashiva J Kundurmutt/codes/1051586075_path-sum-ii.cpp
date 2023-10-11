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
    vector<vector<int>>ans;
    int pbTargetSum;

    void preorder(TreeNode* root, vector<int>currPath, int currSum)
    {
        if(!root->left && !root->right){
            currPath.push_back(root->val);
            if(currSum + root->val == pbTargetSum)
                ans.push_back(currPath);
            
            return;
        }

        currPath.push_back(root->val);
        if(root->left)  preorder(root->left, currPath, currSum + root->val);
        if(root->right)  preorder(root->right, currPath, currSum + root->val);
        return;
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(ans.size())
            ans.clear();
        if(!root) return ans;
        
        pbTargetSum = targetSum;

        preorder(root, vector<int>(), 0);
        return ans;
    }
};