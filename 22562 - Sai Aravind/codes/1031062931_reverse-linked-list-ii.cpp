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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(right-left<1)
            return head;
        ListNode dummy(0,head);
        ListNode *l;
        int i=1;
        for(l=&dummy;i<left;++i,l=l->next);
        auto prv=l->next;
        while(i++<right)
        {
            auto it=prv->next;
            prv->next=it->next;
            it->next=l->next;
            l->next=it;
        }
        return dummy.next;
    }
};