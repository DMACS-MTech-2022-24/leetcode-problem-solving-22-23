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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *first = head, *second = head;
        if(first == nullptr){ //if the given list is empty
            return head; // returns the head
        }
        
        while(head &&head->val == val) // check wheather 1st element is equal to valu
                head = head->next; //if yes (delet) point the head to head-next
        
        // if head is null or head-next is null return then return the head
        if(!head||!head->next) return head;

        first=head->next; // put the first poniter ahead of second
        second=head; // but keep the second pointer to head
        
        // this loop is for checking any element in the middle is equal to the val
        while(first){
            if(first->val == val){ //if first val is equal to val
                second->next = second->next->next;//then second-next should point ot second->next->next
                delete first; //then delet the first
                first = second->next; //then first should point at second-next
            }
            else{ //if not equal
                first = first->next; 
                second = second->next;
            }
        }
        return head; //return the head pointer
    }
};