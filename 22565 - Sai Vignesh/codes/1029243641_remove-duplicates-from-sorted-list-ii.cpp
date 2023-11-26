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
        if(!head || !head->next) return head;
        ListNode *dumy = new ListNode();
        dumy->next = head;  head = dumy;
        ListNode *t = head->next;

        while(t)
        {
            bool x=false;
            while(t->next && t->val == t->next->val)
            {
                t = t->next;
                x=true;
            } 
            if(x) dumy->next = t->next;
            else dumy = t;

            t = t->next;
            x=false;
        }
     return head->next;   
    }
};