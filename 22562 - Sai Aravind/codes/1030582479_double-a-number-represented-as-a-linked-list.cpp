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
    ListNode* doubleIt(ListNode* head) {
        int carry=0;
        ListNode dummy(0,head);
        while(head->next!=NULL)
        {
            auto it=head->next;
            head->next=it->next;
            it->next=dummy.next;
            dummy.next=it;
        }
        auto it=dummy.next;
        for(;it!=NULL;it=it->next)
        {
            auto tmp=(it->val<<1)+carry;
            carry = tmp/10;
            it->val=tmp%10;
        }
        head=dummy.next;
        while(head->next!=NULL)
        {
            auto it=head->next;
            head->next=it->next;
            it->next=dummy.next;
            dummy.next=it;
        }
        if(carry!=0)
        {
            auto new_node=new ListNode(carry,dummy.next);
            dummy.next=new_node;
        }
        return dummy.next;
    }
};