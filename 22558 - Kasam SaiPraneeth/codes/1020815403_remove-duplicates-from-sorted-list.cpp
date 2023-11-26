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
    ListNode* deleteDuplicates(ListNode* head) {
        // using two pointers
        ListNode *f = head;  //f points to head
        if(!f) // if the linkied list is empty 
            return head; //returns head

        ListNode *s = head->next; // s is 2nd pointer,points to head-next
        while(s){ //while s->next != null
            if(f->val == s->val){ //if the sval and fval are same
                f->next = s->next; //fnext points to snext
                delete(s); //delete the node
                s = f->next; //the s is moved to fnext
            }
            else{// if the val are no same
                f = f->next; // f moves to the fnext
                s = s->next; // s moves to the snext
            }
        }
        return head;// returns the linked list with out duplicates and sorted list
    }
};