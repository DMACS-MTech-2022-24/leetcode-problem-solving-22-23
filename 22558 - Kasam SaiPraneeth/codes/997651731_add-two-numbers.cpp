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
        ListNode *l4 = new ListNode();
        ListNode *tmp = l4;
        int sum =0 ,carry=0;
        while((l1 != nullptr) && (l2 != nullptr)){
            sum = carry + l1->val +l2->val;
            l1 = l1->next;
            l2 = l2->next;
            ListNode *l3 = new ListNode(sum%10);
            carry=sum/10;
            tmp->next = l3;
            tmp = l3;

        }
        // if((l1 == nullptr) && (l2 == nullptr) && carry){
        //     Listnode * t = carry;
        //     tmp->next = t
        // }
        while((l1 != nullptr)){
            sum = carry + l1->val;
            l1 = l1->next;
            ListNode *l3 = new ListNode(sum%10);
            carry=sum/10;
            tmp->next = l3;
            tmp = l3;
        }
        while(l2 != nullptr){
            sum = carry +l2->val;
            l2 = l2->next;
            ListNode *l3 = new ListNode(sum%10);
            carry=sum/10;
            tmp->next = l3;
            tmp = l3;
        }
        if(carry>0){
            ListNode * t = new ListNode(carry);
            tmp->next = t;
        }
        return l4->next;
    }
};