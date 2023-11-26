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
        int s=0;
        ListNode *t=new ListNode(),*tmp=t,*t1=head->next;
        while(t1!=NULL){
            while(t1->val!=0){
                s+=t1->val;
                t1=t1->next;
            }
            ListNode *t2=new ListNode(s);
            tmp->next=t2;
            tmp=t2;
            s=0;
            t1=t1->next;
        }
        return t->next;
    }
};