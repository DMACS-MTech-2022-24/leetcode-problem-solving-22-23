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
        if(head==NULL) return head;
        Node *tmp = head;
        while(tmp!=NULL)
        {
            while(tmp->child == NULL)
            {
                if(tmp->next == NULL) return head;
                tmp = tmp->next;
            }

            Node *nt = tmp->child;
            while(nt->next!=NULL) nt = nt->next;

            nt->next = tmp->next;
            if(tmp->next!=NULL) tmp->next->prev = nt;
            tmp->next = tmp->child;
            tmp->child->prev = tmp;
            tmp->child = NULL;

            // tmp = tmp->next;
        }
        return head;
    }
};