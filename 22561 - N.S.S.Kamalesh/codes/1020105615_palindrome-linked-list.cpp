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
    bool isPalindrome(ListNode* head) {
        ListNode*t=head,*t1=head,*t2=NULL;
        int i=0,j;
        for(;t;++i,t=t->next);
        for(int j=0;j<i/2;++j,t1=t1->next);
        t=t1->next;
        t1->next=t2;
        while(t){
            t2=t->next;
            t->next=t1;
            t1=t;
            t=t2;
        }
        for(j=0;j<i/2;++j){
            if(head->val!=t1->val) return false;
            head=head->next;
            t1=t1->next;
        }
        return true;
    }
};