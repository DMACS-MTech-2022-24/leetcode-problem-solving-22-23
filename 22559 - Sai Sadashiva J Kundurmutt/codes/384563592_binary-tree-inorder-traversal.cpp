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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int> ans;
        if(!root)
            return ans;
        st.push(root);
        
        TreeNode * temp;
        while(!st.empty()){
            temp = st.top();
            while(temp->left){
                temp = temp->left;
                st.push(temp);
            }
            // TreeNode *toPro = temp;
            // st.pop();
            
            while(!st.empty() && st.top()->right == NULL){
                ans.push_back(st.top()->val);
                st.pop();
            }
            cout << "Flag\n";
            if(!st.empty() && st.top()->right){
                ans.push_back(st.top()->val);
                TreeNode *t = st.top()->right;
                st.pop();
                st.push(t);        
            }
                
        }
        return ans;    
        
    }
};