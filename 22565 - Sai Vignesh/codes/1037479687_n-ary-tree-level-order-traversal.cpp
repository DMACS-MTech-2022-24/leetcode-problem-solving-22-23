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
        queue<Node*> q1;
        int size;
        q1.push(root);

        while(!q1.empty())
        {
            vector<int> interm;
            size = q1.size();
            while(size)
            {
                Node* curr = q1.front();
                q1.pop();
                for(auto it : curr->children)
                    q1.push(it);
                interm.insert(interm.end(),curr->val);
                --size;
            }
            result.insert(result.end(),interm);
        }

        return result;
        
    }
};