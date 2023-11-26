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
        int flag =0;
        ListNode *f = head;  //f points to head
        ListNode *curr = new ListNode();
        curr->next = head;
        ListNode *tmp = curr;  //

        if(!f) // if the linkied list is empty 
            return head; //returns head

        ListNode *s = head->next; // s is 2nd pointer,points to head-next
        while(s){ //while s->next != null
            if(f->val == s->val){ //if the sval and fval are same
                flag =1;
                f->next = s->next; 
                delete(s); //
                s = f->next; //t
            }
            else{// if the val are no same
                if(flag == 1){
                    flag = 0;
                    curr->next = s;
                    f = s;
                    s = s->next;

                    }
                else{
                    curr = curr->next;
                    f = f->next; // f moves to the fnext
                    s = s->next; // s moves to the snext
                    }
                }
        }
        if(flag == 1){
            curr->next = s;
        }
        if(tmp == curr) return curr->next;
        else return tmp->next;// returns the linked list with out duplicates and sorted list
    }
};