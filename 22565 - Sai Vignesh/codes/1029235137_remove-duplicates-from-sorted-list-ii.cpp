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
        if(head == NULL) return head;
        ListNode *dumy = new ListNode();
        dumy->next = head;  head = dumy;
        ListNode *prev = head,*t = head->next;
        bool x=false;
        // cout<<t->val;

        while(t!=NULL)
        {
            while(t->next && t->val == t->next->val)
            {
                ListNode *del = t;
                t = t->next;
                delete del;
                x=true;
            } 
            if(x) prev->next = t->next;
            else prev = t;

            t = t->next;
            x=false;
        }
     return head->next;   
    }
};