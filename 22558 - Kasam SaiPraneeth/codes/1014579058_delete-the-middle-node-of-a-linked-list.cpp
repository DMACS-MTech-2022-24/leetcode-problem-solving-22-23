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
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0;
        ListNode *tmp = head,*t = head;
        while(tmp){
            count++;
            tmp = tmp->next;
        }
        count/=2;
        if(head->next == nullptr){
            return nullptr;
        }
        int c=1;

        ListNode *first = head->next,*second = head;

        while(c!=count){
                c++;
                first = first->next;
                second = second->next;
            }
                second->next = second->next->next;
                delete first;
    return head;
    }
};