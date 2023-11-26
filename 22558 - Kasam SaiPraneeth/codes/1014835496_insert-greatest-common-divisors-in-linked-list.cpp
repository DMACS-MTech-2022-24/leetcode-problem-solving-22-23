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
        ListNode *tmp1 = head; //tmp1 pointes to the 1st node in the linked list
        ListNode *tmp2 = head->next;//tmp2 pointes to the 2st node in the linked list
        
        if(tmp1->next == nullptr){ //if only one elment in the linked list
            return tmp1; //return the head
        }
        while(tmp2){
            ListNode *newN = new ListNode(); //creats a node every time entries the loop

            newN->val = gcd(tmp1->val, tmp2->val); //assign the gcd value to the newN
            
            newN->next = tmp1->next; //newN node next points to the tmp1-next

            tmp1->next = newN; //tmp1 next points to the newN node

            tmp1 = tmp1->next->next; //tmp1 points to the tmp1 next next
            tmp2 = tmp2->next; // tmp2 points to the tmp2 next
        }
    return head;//returns the head
    }
};