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
    ListNode *detectCycle(ListNode *head) {
        // sloving this using floyds cycle detection algorithm
        // using fast and slow pointer
        ListNode *fast, *slow;
        fast = head, slow = head;
        // while fast and fastnext are not null goes inside
        while(fast && fast->next){
            fast = fast->next->next; // fast pointer moves in 2 steps
            slow = slow->next; // slow pointer moves in one step at a time
        // if the fast and slow pointer are at the same place
            if(fast == slow){
                slow = head; // then move the slow pointer to the head
                while(slow != fast){ //if slow !=fast enters the lopp
                    slow = slow->next; //now slow and fast moves one at a time
                    fast = fast->next;
                }
                return slow;// then return the slow pointer
                // which returns the node at which the cycle is starting
            }
        }
        return NULL;// if no cycle return null
    }
};