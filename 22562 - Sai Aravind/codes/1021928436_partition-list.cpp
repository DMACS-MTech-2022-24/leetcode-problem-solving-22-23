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
        ListNode dummy(0,head);
        ListNode ls;
        ListNode *lt=&ls;
        head=&dummy;
        while(head->next!=NULL)
        {
            auto cur=head->next;
            if(cur->val<x)
            {
                head->next=cur->next;
                lt->next=cur;
                lt=cur;
            }
            else
                head=cur;
        }
        lt->next=dummy.next;
        return ls.next;
    }
};