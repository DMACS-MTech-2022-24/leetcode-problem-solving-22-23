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
    TreeNode* cvt(vector<int>& nums, int l, int r)
    {
        if(l <= r){
            int m = (l + r)/2;
            TreeNode *node = new TreeNode(nums[m]);
            node->left = cvt(nums, l, m - 1);
            node->right = cvt(nums, m + 1, r);
            return node;
        }else{
            return NULL;
        }
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return cvt(nums, 0, n - 1);
    }
};