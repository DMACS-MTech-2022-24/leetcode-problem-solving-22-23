/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* ans;
private:
    void sol(TreeNode* clo,TreeNode* tar){
        if(clo==NULL) return;
        if(clo->val==tar->val) ans = clo;
        sol(clo->left,tar);
        sol(clo->right,tar);
    }
public:
    TreeNode* getTargetCopy(TreeNode* org, TreeNode* clo, TreeNode* tar) {
        sol(clo,tar);
        return ans;
    }
};