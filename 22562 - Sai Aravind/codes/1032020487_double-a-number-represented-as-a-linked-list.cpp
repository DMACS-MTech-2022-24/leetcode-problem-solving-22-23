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
        bool carry=head->val>4;
        auto it=head;

        for(;it->next!=NULL;it=it->next)
        {
            auto nxt=it->next;
            it->val= ((it->val<<1)+(nxt->val>4))%10;
        }
        it->val= ((it->val<<1))%10;
        if(carry)
        {
            return new ListNode(1,head);
        }
        else
            return head;
    }
};