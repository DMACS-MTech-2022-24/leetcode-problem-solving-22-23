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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA, lenB;
        lenA = lenB = 0;

        ListNode *ptrA, *ptrB;
        ptrA = headA;
        ptrB = headB;
        while(ptrA){
            lenA++;
            ptrA = ptrA->next;
        }

        while(ptrB){
            lenB++;
            ptrB = ptrB->next;
        }   


        ptrA = headA;
        ptrB = headB;
        if(lenA > lenB){
            for(int i = 0; i < (lenA - lenB); i++){
                ptrA = ptrA->next;
            }    
        }else{
            for(int i = 0; i < (lenB - lenA); i++){
                ptrB = ptrB->next;
            }    
        }

        while(ptrA != ptrB){
            ptrA = ptrA->next;
            ptrB = ptrB->next;
        }


        return ptrA;
        
    }
};