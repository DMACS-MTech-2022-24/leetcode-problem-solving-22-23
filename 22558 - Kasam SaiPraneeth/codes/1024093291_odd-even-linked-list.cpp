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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *f = head;
        if(!f || !f->next) return head;
        ListNode *s = head->next,*s1 = head->next;;

        while(s){//s->next != null
            if(!s->next){
                f->next = s1;
                break;
            }
            f->next = s->next;
            f = s->next;
            s->next = f->next;
            s = f->next;
            if(!f->next)
                f->next = s1;
        }
        return head;
    }
};