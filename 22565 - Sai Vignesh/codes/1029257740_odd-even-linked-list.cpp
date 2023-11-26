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
        if(head==NULL || head->next==NULL)
         return head;
        ListNode *h2 = head->next,*t1 = head,*t2 = head->next;
        // cout<<t2->next->val<<" "<<t2->next->val<<endl;
        while(t2->next!=NULL && t2->next->next!=NULL)
        {
            // cout<<t1->val<<" "<<t2->val<<endl;
            t1->next = t2->next;
            t2->next = t2->next->next;

            t1 = t1->next; 
            t2 = t2->next;
        }
        if(t2->next!=NULL){
            // cout<<t2->next->val;
            t1->next = t2->next;
            t2->next = NULL;
            t1 = t1->next;
        }
        t1->next = h2;
        return head;
    }
};