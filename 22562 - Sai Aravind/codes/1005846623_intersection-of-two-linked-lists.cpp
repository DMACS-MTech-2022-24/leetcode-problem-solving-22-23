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
        for(;headA!=NULL and headB!=NULL;headA=headA->next,headB=headB->next)
        {
            if(not S.insert(headA).second)
                return headA;

            if(not S.insert(headB).second)
                return headB;
        }
        for(;headA!=NULL;headA=headA->next)
        {
            if(not S.insert(headA).second)
                return headA;
        }
        for(;headB!=NULL;headB=headB->next)
        {
            if(not S.insert(headB).second)
                return headB;
        }
        return NULL;
    }
};