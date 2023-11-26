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
    ListNode* reverseList(ListNode* head) {
        ListNode *t1=head,*t2,*t3=NULL;
        while(t1!=NULL){
            t2=new ListNode(t1->val,t3);
            t1=t1->next;
            t3=t2;
        }
        return t2;
    }
};