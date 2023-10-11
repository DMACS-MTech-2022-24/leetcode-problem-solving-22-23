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
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return vector<int>();
        stack<pair<TreeNode*, int>> st;
        vector<int> ans;
        st.push(make_pair(root, 1));
        pair<TreeNode*, int>top;
        while(!st.empty()){
            
            top = st.top();
            if(top.second == 1){
                ans.push_back(top.first->val);
                st.top().second = 2;
            }
            
            if(top.second == 2){

                if(top.first->left){
                    
                    top.first = top.first->left;
                    st.top().second = 3;
                    st.push(make_pair(top.first, 1));
                    continue;
                }
                // if(top.first->right){
                //     st.top().second = 3;
                //     top.first = top.first->right;
                //     st.push(make_pair(top.first, 2));
                //     continue;
                // }
                st.top().second = 3;
            }
            top = st.top();
            
            if(top.second == 3){
                
                if(top.first->right){
                    
                    top.first = top.first->right;
                    st.top().second = 4;
                    st.push(make_pair(top.first, 1));
                    continue;
                    
                }
                 st.top().second = 4;
            }
            cout << "Sairam" << st.top().second << endl;
            if(st.top().second == 4)
                st.pop();
        }
        return ans;
    }
};