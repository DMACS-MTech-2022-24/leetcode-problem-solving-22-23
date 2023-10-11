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
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL) return false;
        ListNode* tmp1=head,*tmp2=head;
        while(tmp1!=NULL && tmp1->next!=NULL){
            tmp1=tmp1->next->next;
            tmp2=tmp2->next;
            if(tmp1==tmp2) return true;
        }
        return false;
    }
};