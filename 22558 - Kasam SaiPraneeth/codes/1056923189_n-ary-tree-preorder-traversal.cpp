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
    // Starting from the root node, which ever elements are encountered during
    //traversal in the result vector and this vector result is returned once the
    // traversal is completed.
    vector<int> result;
    vector<int> preorder(Node* root) {
        //
        // if the root is empty (edge case)
        if(root == NULL)
            return result;
        // pushes the current node
        result.push_back(root->val);
        // In this it traverse the subtree of the current node
        for(auto node: root->children) preorder(node);   
        return result;
    }
};