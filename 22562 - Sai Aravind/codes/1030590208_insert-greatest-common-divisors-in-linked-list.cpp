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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        for(auto it=head;it->next!=NULL;)
        {
            auto nxt=it->next;
            it->next =new ListNode(__gcd(it->val,nxt->val),nxt);
            it=nxt;
        }
        return head;
    }
};