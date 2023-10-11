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
        if(head->next==NULL) return head;
        ListNode*tmp1=new ListNode(501,head);
        int i=1;
        for(;i<left;++i,tmp1=tmp1->next);
        ListNode*t1=tmp1->next,*t=t1->next,*t2;
        while(i<right){
            t2=t->next;
            t->next=t1;
            t1=t;
            t=t2;
            ++i;
        }
        tmp1->next->next=t;
        tmp1->next=t1;
        if(tmp1->val==501) return tmp1->next;
        return head;
    }
};