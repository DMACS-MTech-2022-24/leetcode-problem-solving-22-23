/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 *right,*itr,*inxt
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next==NULL) return head;
        ListNode *left = head,*right,*i;
        // if the first node is less than x
        if(head->val < x)
        {
            i = left->next;
            while(i!=NULL && i->val < x){
                left = left->next;
                i = i->next;
            } 
            // cout<<left->val<<" "<<i->val;
            if(i==NULL) return head; 
            right = i;
            i = i->next;
        }
        else{
            right = head; i = head->next;
            while(i!=NULL && i->val>=x){
                right = right->next; i = i->next;
            }
            if(i==NULL) return head;
            right->next = right->next->next;
            i->next = head;
            head = i;
            left = head;
            i = right->next;
        }

        while(i!=NULL)
        {
            if(i->val < x)
            {
                right->next = right->next->next;
                i->next = left->next;
                left->next = i;
                left = left->next;
                // inxt = i->next;
            }
            else{
                right = right->next; 
            }
            i = right->next;
        }

        return head;
    }
};