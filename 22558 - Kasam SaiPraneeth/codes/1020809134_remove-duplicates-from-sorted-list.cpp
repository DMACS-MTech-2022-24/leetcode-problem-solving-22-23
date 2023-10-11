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
        ListNode *f = head;
        if(!f)
            return head;
        ListNode *s = head->next;
        
        while(s){
            if(f->val == s->val){
                f->next = s->next;
                delete(s);
                s = f->next;
            }
            else{
                f = f->next;
                s = s->next;
            }
        }
        return head;
    }
};