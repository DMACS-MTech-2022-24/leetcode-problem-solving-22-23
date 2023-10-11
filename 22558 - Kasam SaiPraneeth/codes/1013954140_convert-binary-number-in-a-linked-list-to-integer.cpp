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
    int getDecimalValue(ListNode* head) {
        int count =0;
        ListNode *tmp = head, *t=head;
        while(tmp){
            count++;
            tmp = tmp->next;
        }
        int sum= 0;
        count-=1;
        
        while(t){
            sum+=(t->val)*pow(2,count);
            t = t->next;
            count--;

        }
        return sum;
    }
};