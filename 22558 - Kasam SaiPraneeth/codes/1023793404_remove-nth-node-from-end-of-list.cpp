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
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        ListNode *s = head, *curr = head;
        int count= 0;
        if(!curr->next)return NULL; 
        
        
        while(curr){// works untill the currnext is null 
            if(count>k){//for finding the kth position from back
                s = s->next; //moves only if the count is greather then k & s points to snext
            }
            count++; //increment
            curr = curr->next; // moves to next node
        }
        //if count is equal to k means have to remove the first element form the begining
        // so return headnext
        if(count == k) return head->next;
        // if s or snext is null return the head
        if(!s || !s->next) return head;
        s->next = s->next->next; // othewise snext points to the snextnext
    
    return head; // return the head after removing nth node from end of the list
    }
};