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
    ListNode* swapPairs(ListNode* head) {
        // if head is null or headnext is null reutns the head
        if(!head || !head->next) return head;

        ListNode *tmp = new ListNode(); // creatinga new node
        tmp->next = head; // new node is pointing to the head
        ListNode *t = tmp; // one more pointer to the new node
        ListNode *f = head, *s = head->next; 
        while(s){ //runs till the s-next is null
            f->next = s->next; //fnext points to snext
            s->next = tmp->next; //snext points to tmpnext
            tmp->next = s;// then tmpnext points to s
            tmp = f;//move the tmp to f
            f = f->next; // then move f to fnext
            // checks weather f or fnext is null,if yes then tnext is return  
            if(!f || !f->next) return t->next; 
            s = f->next; //else s moves to fnext
        }
     return t->next;//returns the linked list with swaps nodes in pairs
    }
};