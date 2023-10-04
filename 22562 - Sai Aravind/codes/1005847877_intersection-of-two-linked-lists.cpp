/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> S;
        for(;headA!=NULL;headA=headA->next)
        {
            S.insert(headA);
        }
        for(;headB!=NULL;headB=headB->next)
        {
            if(S.find(headB)!=S.end())
                return headB;
        }
        return NULL;
    }
};