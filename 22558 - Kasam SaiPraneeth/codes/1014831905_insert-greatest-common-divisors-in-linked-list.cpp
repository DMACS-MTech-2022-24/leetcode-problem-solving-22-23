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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *tmp1 = head, *tmp2 = head->next;
        

        if(tmp1->next == nullptr){
            return tmp1;
        }
        
        while(tmp2){
            ListNode *newN = new ListNode();

            newN->val = gcd(tmp1->val, tmp2->val);
            
            newN->next = tmp1->next;

            tmp1->next = newN;

            tmp1 = tmp1->next->next;
            tmp2 = tmp2->next;
        }
    return head;
    }
};