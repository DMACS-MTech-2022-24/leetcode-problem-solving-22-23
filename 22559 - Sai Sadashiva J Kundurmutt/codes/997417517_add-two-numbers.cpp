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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;

        ListNode *res = new ListNode();

        ListNode *tmp = res;
        while(l1 && l2){

            int sum = l1->val + l2->val + carry;
            if(sum > 9){
                carry = 1;
                sum = sum % 10;
            }else{
                carry = 0;
            }

            
            tmp->val = sum;
            l1 = l1->next;
            l2 = l2->next;

            if(l1 && l2){
                tmp->next = new ListNode();
                tmp = tmp->next;
            }
        }

        if(!l1){
            while(l2){
                int ans = l2->val + carry;
                if(ans > 9){
                    carry = 1;
                }else {
                    carry = 0;
                }

                tmp->next = new ListNode((ans % 10));
                tmp = tmp->next;
                l2 = l2->next;
            }
        }else if(!l2){
            while(l1){
                int ans = l1->val + carry;
                if(ans > 9){
                    carry = 1;
                }else {
                    carry = 0;
                }

                tmp->next = new ListNode(ans % 10);
                tmp = tmp->next;
                l1 = l1->next;
            }
        }

        if(carry == 1){
            tmp->next = new ListNode(1);
        }

        return res;

    }
};