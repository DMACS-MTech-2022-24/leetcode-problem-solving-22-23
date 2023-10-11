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
       // then prev is pointer pointing to nullptr

       while(current != nullptr){ //goes till the end of the linked list
           tmp = current->next; //pointing tmp to current next
           current->next = prev; //current next is pointing to prev
           prev = current; //prev is pointing at current
           current = tmp; // current is pointin at tmp
        }
    return prev; //returns reversed list
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *r1 = reverse(l1), *r2 = reverse(l2);
        ListNode *s = new ListNode(),*result = s;
        int carry=0;
        int sum =0;

        while(r1 || r2 || carry){
            if(r1){
                sum += r1->val;
                r1 = r1->next;
            }
            if(r2){
                sum += r2->val;
                r2 = r2->next;
            }
            sum+= carry;
            carry=sum/10;
            // s->val = sum%10;
            // ListNode *newnode = new ListNode(carry);
            // s->next = newnode;
            // // s->next = new ListNode(carry)
            // s = s->next;
            if (!s) {
                s = new ListNode(sum % 10);
                result = s;
            } else {
                s->next = new ListNode(sum % 10);
                s = s->next;
            }
            sum =0;
        }
        return reverse(result->next);
    }
};