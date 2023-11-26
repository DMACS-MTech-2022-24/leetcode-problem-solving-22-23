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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *t=head,*t1=head;
        while(--k) t=t->next;
        ListNode *t2=t;
        while(t->next){
            t1=t1->next;
            t=t->next;
        }
        int tmp=t2->val;
        t2->val=t1->val;
        t1->val=tmp;
        return head;
    }
};