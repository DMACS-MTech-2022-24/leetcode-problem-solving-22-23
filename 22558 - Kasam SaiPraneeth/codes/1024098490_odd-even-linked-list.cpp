/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *f = head;
        //if only one node or head is null 
        if(!f || !f->next) return head; //return head
        ListNode *s = head->next,*s1 = head->next;;//s1 is storing the head of 1st even node

        while(s){//s->next != null
            if(!s->next){ // if the s-next is null
                f->next = s1; //then point the odd index last node to the s1
                break;// then break and return the head 
            }
            f->next = s->next;
            f = s->next;
            s->next = f->next;
            s = f->next;
            if(!f->next) // if the f->next is null
                f->next = s1;//then point the odd index last node to the s1
        }
        return head; // return the odd even linked list head;
    }
};