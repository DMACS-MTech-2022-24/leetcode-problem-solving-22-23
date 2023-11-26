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

    TreeNode* makeBST(int left,int right,vector<int>& nums)
    {
        if(right<left) 
            return NULL;
        int mid = (left+right)/2;
        TreeNode* curr = new TreeNode(nums[mid]);
        curr->left = makeBST(left,mid-1,nums);
        curr->right = makeBST(mid+1,right,nums);
        return curr;

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
     // everytime make the middle as root and recursively go to its children  
        return makeBST(0,nums.size()-1,nums);

  
    }
};