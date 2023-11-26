/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include<bits/stdc++.h>

struct info {
  bool p, q, isValid;
  int h;
  info()
  {
      isValid = false;
      p = q = false;
  }
    
  // info(bool p, bool q, int h): p(p), q(q), h(h){}
};

class Solution {
private:
    unordered_map<int, info> dp;
    vector<TreeNode *> node_list;
public:
    void contains(TreeNode* root, TreeNode* p, TreeNode* q, int h) {
        if(root == NULL)
            return;
        
        
        info _info;
        if(root == p){
            _info.p = true;
            _info.isValid = true;
        }
        if(root == q){
            _info.q = true;
            _info.isValid = true;
        }
        
        
            
        
        contains(root->left, p, q, h + 1);
        contains(root->right, p, q, h + 1);
        if(root->left && dp[root->left->val].isValid){
            info l = dp[root->left->val];
            _info.p = _info.p || l.p;
            _info.q = _info.q || l.q;
            _info.isValid = true;
            
        }
        if(root->right && dp[root->right->val].isValid){
            // cout << root->val << " " << _info.p << " " << _info.q  << " " << p << " " << q << endl;
            info r = dp[root->right->val];
            _info.p = _info.p || r.p;
            
            _info.q = _info.q || r.q;
            _info.isValid = true;
        }
        _info.h = h;
        // cout << root->val << endl;
        dp[root->val] = _info;
        
        node_list.push_back(root);
            
      
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
           contains(root, p, q, 0);
           int mheight = -1;
           TreeNode * ans = NULL; 
           for(TreeNode * node: node_list){
               info _info = dp[node->val];
               cout << node->val << " "<< _info.h << " " << _info.p << " " << _info.q << endl;
               if(_info.h > mheight && _info.p && _info.q){
                   ans = node;
                   mheight = _info.h; 
               }
           }
           node_list.clear();
           dp.clear();
        
           return ans;
            
               
    }
};