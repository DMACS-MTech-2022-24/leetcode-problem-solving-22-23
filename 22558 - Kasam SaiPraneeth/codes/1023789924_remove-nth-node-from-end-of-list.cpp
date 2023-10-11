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
        ListNode *f = head, *s = head, *curr = head;
        int count= 0;
        if(!curr->next)return NULL; 
        // f will move untill the position k is a found, then s start moving for finding
        // position from back 
        
        while(curr){// works untill the currnext is null
            // if(count<k){ // for finding the position from begining
            //     f = f->next; // moves only if count is lessthen k
            // }
            if(count>k){//for finding the later position from begining
                s = s->next; //moves only if the count is greather then k
            }
            count++;
            curr = curr->next; //every time comes into the loop moves to next node
        }
        cout<<count<<endl;
        if(count == k) return head->next;
        if(!s || !s->next) return head;
        s->next = s->next->next;
    
    return head; // return the head with swaped values in the given position
    }
};