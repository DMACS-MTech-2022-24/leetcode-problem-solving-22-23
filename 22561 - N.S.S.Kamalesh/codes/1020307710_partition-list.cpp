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
    ListNode* partition(ListNode* head, int x) {
        if(!head||!(head->next)) return head;
        ListNode *tmp1=new ListNode(0,head);
        ListNode*t=tmp1,*t1=tmp1;
        while(t){
            while(t->next&&t->next->val<x) t=t->next;
            if(!(t->next)) return tmp1->next;
            t1=t->next;
            while(t1->next&&t1->next->val>=x) t1=t1->next;
            if(!(t1->next)) return tmp1->next;
            ListNode *tmp3=new ListNode(t1->next->val,t->next);
            t->next=tmp3;
            t1->next=t1->next->next;
            t=t->next;
        }
        return tmp1->next;
    }
};