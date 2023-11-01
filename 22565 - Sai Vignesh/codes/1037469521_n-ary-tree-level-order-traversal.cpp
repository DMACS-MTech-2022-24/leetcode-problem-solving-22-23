/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return{};
        vector<vector<int>> result;
        queue<Node*> q1,q2;
        q1.push(root);
        while(true)
        {
            vector<int> interm = {};
            while(!q1.empty())
            {
                Node* curr = q1.front();
                q1.pop();
                for(auto it : curr->children)
                    q2.push(it);
                interm.insert(interm.end(),curr->val);  // change to check if no elements then do insert, otherwise try to use "push_back"
            }
            result.insert(result.end(),interm);
            if(q2.empty()) break;
            swap(q1,q2);

        }
        return result;
        
    }
};