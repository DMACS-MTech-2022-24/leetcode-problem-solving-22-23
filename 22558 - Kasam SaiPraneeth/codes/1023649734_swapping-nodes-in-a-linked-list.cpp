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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *f = head, *s = head, *curr = head;
        int count= 1;

        // this loop is for finding the position of the nodes for swapping
        while(curr){// works untill the currnext is null
            if(count<k){ // for finding the position from begining
                f = f->next;
            }
            if(count>k){//for finding the later position from begining
                s = s->next;
            }
            count++;
            curr = curr->next; //every time comes into the loop moves to next node
        }
        int tmp = f->val;//creating a temporary variable and storing the val fval in it  
        f->val = s->val; // then puting the sval in fval 
        s->val = tmp; //then puting the tmp in sval
    return head; // return the head with swaped values in the given position
    }
};