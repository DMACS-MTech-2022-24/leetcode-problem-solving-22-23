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
    ListNode* reverse(ListNode* head) {
       ListNode *tmp, *current=head, *prev=nullptr;
       //tmp is simple pointer and current is pointing to head, 
       //then prev is pointer pointing to nullptr
       while(current != nullptr){ //goes till the end of the linked list
           tmp = current->next; //pointing tmp to current next
           current->next = prev; //current next is pointing to prev
           prev = current; //prev is pointing at current
           current = tmp; // current is pointin at tmp
        }
    return prev; //returns reversed list
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode *r = reverse(head);
        ListNode *tmp = r,*last;
        int carry =0;
        while(tmp != NULL){
            int sum = (tmp->val)*2+carry;
            carry = sum/10;
            tmp->val = sum%10;
            last = tmp;
            tmp = tmp->next;
        }
        if(carry!=0){
            last->next = new ListNode(carry);
        }
        ListNode *ans = reverse(r);
        return ans;
    }
};