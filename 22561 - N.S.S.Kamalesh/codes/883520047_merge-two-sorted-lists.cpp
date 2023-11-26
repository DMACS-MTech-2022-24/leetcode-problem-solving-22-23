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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        ListNode *t1=list1,*t2=list2,*h3,*t3,*t4;
        if(t1->val<=t2->val){
            h3=new ListNode(t1->val);
            t1=t1->next;
        }
        else{
            h3=new ListNode(t2->val);
            t2=t2->next;
        }
        t3=h3;
        while(t1!=NULL&&t2!=NULL){
            if(t1->val<=t2->val){
                t4=new ListNode(t1->val);
                t1=t1->next;
            }
            else{
                t4=new ListNode(t2->val);
                t2=t2->next;
            }
            t3->next=t4;
            t3=t4;
        }
        while(t1!=NULL){
            t4=new ListNode(t1->val);
            t1=t1->next;
            t3->next=t4;
            t3=t4;
        }
        while(t2!=NULL){
            t4=new ListNode(t2->val);
            t2=t2->next;
            t3->next=t4;
            t3=t4;
        }
        return h3;
    }
};