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
        if(head==NULL) return head;
        ListNode *one = head,*two = head->next;
        while(two!=NULL)
        {
            if(two->val != one->val){
                one = one->next;
                two = two->next;
            }
            else{
                two = two->next;
                one->next = two;
            }
        }
        return head;
    }
};