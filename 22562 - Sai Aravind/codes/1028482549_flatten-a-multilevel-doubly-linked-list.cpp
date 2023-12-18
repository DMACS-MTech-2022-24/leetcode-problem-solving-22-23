/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        auto it=head;
        while(it!=NULL and it->child==NULL) it=it->next;
        if(it==NULL)
            return head;
        Node *sibling=it->child;
        list<Node*> S={it};
        while(not S.empty())
        {
            if(sibling->child!=NULL)
            {
                S.push_back(sibling);
                sibling=sibling->child;
            }
            else if(sibling->next==NULL)
            {
                auto father=S.back();
                S.pop_back();
                auto child = father->child;
                father->child=NULL;
                auto nxt   = father->next;
                father->next=child;
                sibling->next=nxt;
                if(nxt!=NULL)
                    nxt->prev=sibling;
                child->prev=father;
            }
            else
            {
                sibling=sibling->next;
            }
        }
        return head;
    }
};