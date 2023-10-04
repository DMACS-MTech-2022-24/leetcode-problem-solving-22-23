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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0,head);
        ListNode *i=&dummy,*j=head;

        while(j!=NULL)
        {
            if(i->next->val==j->val)
                j=j->next;
            else if(i->next->next==j)
            {
                i=i->next;
                j=j->next;
            }
            else
                i->next=j;
        }
        if(i->next!=NULL and i->next->next!=NULL)
            i->next=j;
        return dummy.next;
    }
};