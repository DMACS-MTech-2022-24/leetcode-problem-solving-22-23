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
        ListNode *tmp= new ListNode(0,head),*tmp1=tmp;
        ListNode *t=head,*t1;
        while(t&&t->next){
            t1=t->next;
            t->next=t1->next;
            t1->next=t;
            tmp->next=t1;
            tmp=t;
            t=t->next;
        }
        return tmp1->next;
    }
};