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
        // reversing the both the lists
        ListNode *r1 = reverse(l1), *r2 = reverse(l2);
        ListNode *s = new ListNode(),*result = s;
        int carry=0;
        int sum =0;
        // while loop works untill r1,2,carry becomes null
        while(r1 || r2 || carry){
            if(r1){ // if r1 is not null
                sum += r1->val; //r1val is added to the sum
                r1 = r1->next; // then move the r1 to r1next
            }
            if(r2){// if r2 is not null
                sum += r2->val;//r2val is added to the sum
                r2 = r2->next;// then move the r2 to r2next
            }
            sum+= carry; // every time add the carry to the sum
            carry=sum/10;
            if (!s) { 
                s = new ListNode(sum % 10);
                result = s;
            } else {
                s->next = new ListNode(sum % 10);
                s = s->next;
            }
            sum =0; //every time make the sum to 0
        }
        return reverse(result->next);
    }
};