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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0,head),*prv=&dummy;
        while(head!=NULL)
        {
            if(head->val==val)
            {
                prv->next=head->next;
                head=prv->next;
            }
            else
            {
                prv=head;
                head=head->next;
            }
        }
        return dummy.next;
    }
};