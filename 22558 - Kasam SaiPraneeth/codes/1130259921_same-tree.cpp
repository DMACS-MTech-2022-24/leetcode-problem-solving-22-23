class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode* ,TreeNode*>> st;
        st.push({p, q});

        while(!st.empty()){
            TreeNode *nd1, *nd2; 
            tie(nd1,nd2)= st.top();
            st.pop();

            if(nd1 == NULL && nd2 == NULL) continue;
            if(nd1 == NULL || nd2 == NULL) return false;
            if(nd1->val != nd2->val) return false;
            st.push({nd1->left, nd2->left});
            st.push({nd1->right, nd2->right});
        }
        return true;
    }
};