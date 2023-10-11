/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *h1=l1,*h2=l2;
    struct ListNode *l3=malloc(sizeof(struct ListNode));
    struct ListNode *t=l3;
    struct ListNode *tmp;
    int c=0;
    while(h1!=NULL && h2!=NULL){
        t->val=(c+h1->val+h2->val)%10;
        c=(c+h1->val+h2->val)/10;
        h1=h1->next;h2=h2->next;
        t->next=malloc(sizeof(struct ListNode));
        tmp=t;
        t=t->next;

    }
    while(h1!=NULL){
        t->val=(c+h1->val)%10;
        c=(c+h1->val)/10;
        h1=h1->next;
        t->next=malloc(sizeof(struct ListNode));
        tmp=t;
        t=t->next;
    }
    while(h2!=NULL){
        t->val=(c+h2->val)%10;
        c=(c+h2->val)/10;
        h2=h2->next;
        t->next=malloc(sizeof(struct ListNode));
        tmp=t;
        t=t->next;
    }
    if(c==0){
        free(t);
        tmp->next=NULL;
    }
    else{
        t->val=c;
        t->next=NULL;
    }
    return l3;
}