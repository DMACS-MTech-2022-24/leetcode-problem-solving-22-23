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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode*tmp=head,*tmp1=head;
        while(head->next&&head->val==head->next->val) head=head->next;
        if(!head->next) return NULL;
        tmp=head;
        if(tmp1!=head) cout<<"gbsetgt";
        int flag=0;
        while(tmp->next->next!=NULL){
            if(tmp->next->val==tmp->next->next->val){
                tmp->next->next=tmp->next->next->next;
                flag=1;
            }
            else{
                if(flag==1){
                    flag=0;
                    tmp->next=tmp->next->next;
                }
                else tmp=tmp->next;
            }
        }
        if(flag==1) tmp->next=tmp->next->next;
        if(head!=tmp1) return head->next;
        return head;
    }
};