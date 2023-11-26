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
        // cout<<t->val;

        while(t!=NULL)
        {
            if(t->next!=NULL && t->val == t->next->val)
            {
                while(t->next && t->val == t->next->val) t = t->next;
                prev->next = t->next;
            }
            else prev = t;

            t = t->next;
        }
     return head->next;   
    }
};