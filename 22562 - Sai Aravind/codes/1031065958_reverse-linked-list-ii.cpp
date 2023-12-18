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
        ListNode dummy(0,head);
        ListNode *l;
        right-=left;
        for(l=&dummy; --left > 0;l=l->next);
        auto prv=l->next;
        while(right-- >0)
        {
            auto it=prv->next;
            prv->next=it->next;
            it->next=l->next;
            l->next=it;
        }
        return dummy.next;
    }
};