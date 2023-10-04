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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        vector S={make_pair(root,to_string(root->val))};

        while(not S.empty())
        {
            auto &[node,path]=S.back();
            auto &l=node->left;
            auto &r=node->right;
            if(l==r)
            {
                paths.push_back(path);
                S.pop_back();
            }
            else if(l==NULL)
            {
                node=r;
                path+="->"+to_string(r->val);
            }
            else 
            {
                auto tmp_path=path;
                node=l;
                path+="->"+to_string(l->val);
                if(r!=NULL)
                {
                    S.push_back({r,tmp_path+"->"+to_string(r->val)});
                    l=NULL;
                }
            }
        }
        return paths;
    }
};