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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next) return NULL;
        ListNode*t=head,*t1=head;
        for(int i=1;i<=n;++i)
            t=t->next;
        if(!t) return head->next;
        while(t->next){
            t=t->next;
            t1=t1->next;
        }
        t1->next=t1->next->next;
        return head;
    }
};