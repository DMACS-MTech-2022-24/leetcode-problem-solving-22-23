/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x){
    struct ListNode *le,*re;
    struct ListNode *t1,*i,*j;
    if(head==NULL || head->next==NULL)
        return head;
    i=le=malloc(sizeof(struct ListNode));
    j=re=malloc(sizeof(struct ListNode));
    i->next=NULL;
    for(t1=head;t1!=NULL;t1=t1->next)
    {
        if(t1->val<x)
        {
            i->next=t1;
            i=i->next;
            //printf("%d -> %d\n",i->val,t1->val);
        }
        else
        {
            j->next=t1;
            j=j->next;
            //printf("%d -> %d\n",j->val,t1->val);
        }
    }
    j->next=NULL;
    i->next=re->next;
    t1=le->next;
    free(le);
    free(re);
    return t1;
}