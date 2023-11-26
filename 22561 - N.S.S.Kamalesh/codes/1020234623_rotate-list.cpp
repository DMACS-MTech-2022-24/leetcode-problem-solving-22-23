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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||!head||!(head->next)) return head;
        ListNode *t=head,*t1=head;
        int i=0;
        for(;t->next;++i,t=t->next);
        ++i;
        k=k%i;
        for(int j=1;j<i-k;++j,t1=t1->next);
        t->next=head;
        t=t1->next;
        t1->next=NULL;
        return t;
    }
};