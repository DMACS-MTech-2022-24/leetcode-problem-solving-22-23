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
    bool hasCycle(ListNode *head) {
      ListNode * f = head; //f is ponting to head
      ListNode * s = head;//s is ponting to head
      
      while(f != nullptr && f->next != nullptr){
        s = s->next;// Slow pointer, take single step
        f = f->next->next; // fast pointer, take 2 steps in single move
        
        if(s == f) // if s and f are pointer to same node means there is cycle in the list
            return true;

      }
      return false;// if s and f are not pointing to same node means there is nocycle in the list
    }
    
};
