/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *t1=head,*t2,*t3=NULL;
    while(t1!=NULL){
        t2=malloc(sizeof(struct ListNode));
        t2->val=t1->val;
        t1=t1->next;
        if(t3==NULL)
            t2->next=NULL;
        else
            t2->next=t3;
        t3=t2;
    }
    return t2;
}