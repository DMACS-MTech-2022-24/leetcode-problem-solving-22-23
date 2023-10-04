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
    ListNode* removeNodes(ListNode* head) {
        ListNode dummy(0,head);
        while(head->next!=NULL)
        {
            auto it=head->next;
            head->next=it->next;
            while(dummy.next!=head->next and dummy.next->val<it->val)
            {
                dummy.next=dummy.next->next;
            }
            if(head->next==dummy.next)
                head=it;
            it->next=dummy.next;
            dummy.next=it;
        }
        head=dummy.next;
        while(head->next!=NULL)
        {
            auto it=head->next;
            head->next=it->next;
            it->next=dummy.next;
            dummy.next=it;
        }        
        return dummy.next;
    }
};