/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(not root)
            return root;
        list<Node*> Q={root,nullptr};
        while(not Q.empty())
        {
            auto tp=Q.front();
            Q.pop_front();
            if(tp)
            {
                if(tp->left)
                {
                    Q.push_back(tp->left);
                }
                if(tp->right)
                {
                    Q.push_back(tp->right);
                }
                tp->next=Q.front();
            }
            else if(not Q.empty())
            {
                Q.push_back(nullptr);
            }
        }
        return root;
    }
};