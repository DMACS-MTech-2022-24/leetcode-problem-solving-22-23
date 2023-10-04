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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL or head->next==NULL)
            return NULL;
        auto sp=head->next,fp=sp->next;
        for(;fp!=NULL and fp->next!=NULL and sp!=fp;fp=fp->next->next,sp=sp->next);
        if(fp==NULL or fp->next==NULL)
            return NULL;
        for(sp=head;fp!=sp;fp=fp->next,sp=sp->next);
        return fp;
    }
};