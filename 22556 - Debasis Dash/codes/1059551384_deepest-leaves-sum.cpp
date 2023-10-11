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
    int deepestLeavesSum(TreeNode* root) {
        if (root == NULL)
            return 0;

        queue<TreeNode*> q;
        
        int sum;

        q.push(root);

        while(!q.empty()){
            int qSize = q.size();
            sum = 0;

            for(int i=0; i<qSize; i++){
                TreeNode * currentNode = q.front();
                q.pop();
                sum += currentNode->val;
                

                if(currentNode->left)
                    q.push(currentNode->left);
                
                if(currentNode->right)
                    q.push(currentNode->right);
            }
        }
        

        return sum;

    }
};