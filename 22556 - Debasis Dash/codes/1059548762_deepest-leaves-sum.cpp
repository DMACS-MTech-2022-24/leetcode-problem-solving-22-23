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
        queue<TreeNode*> q2;


        q.push(root);

        while(!q.empty()){
            int qSize = q.size();
            q2 = queue<TreeNode*>();

            for(int i=0; i<qSize; i++){
                TreeNode * currentNode = q.front();
                q.pop();
                q2.push(currentNode);
                

                if(currentNode->left)
                    q.push(currentNode->left);
                
                if(currentNode->right)
                    q.push(currentNode->right);
            }
        }
        int sum=0;
        while(!q2.empty()){
            sum += q2.front()->val;

            q2.pop();
        }

        return sum;

    }
};