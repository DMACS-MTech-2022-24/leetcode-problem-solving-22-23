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
        ListNode *f = head, *s = head, *curr = head,*h = head;
        int n=1,count1 = 1, count2 = 1;
        while(h){
            n++;
            h = h->next;
        }
        while(curr){
            if(count1<k){
                count1++;
                f = f->next;
            }
            if(count2<n-k){
                count2++;
                s = s->next;
            }
            curr = curr->next;
        }
        int tmp = f->val;
        f->val = s->val;
        s->val = tmp;
    return head;
    }
};