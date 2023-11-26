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
        if(!head || !head->next) return head;
        ListNode *tmp = new ListNode();
        tmp->next = head;
        ListNode *t = tmp;
        ListNode *f = head, *s = head->next;
        while(s){
            f->next = s->next;
            s->next = tmp->next;
            tmp->next = s;
            tmp = f;
            f = f->next;
            if(!f || !f->next) return t->next;
            s = f->next;
        }
     return t->next;   
    }
};