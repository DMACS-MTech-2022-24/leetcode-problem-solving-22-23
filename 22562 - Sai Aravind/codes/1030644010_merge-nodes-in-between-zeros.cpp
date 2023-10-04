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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *f=head->next,*nxt=head,*l;
        while(f!=NULL)
        {
            int sum=0;
            for(;f->val!=0;f=f->next)
            {
                sum+=f->val;
            }
            nxt=nxt->next;
            nxt->val=sum;
            f=f->next;
        }
        nxt->next=NULL;
        return head->next;
    }
};