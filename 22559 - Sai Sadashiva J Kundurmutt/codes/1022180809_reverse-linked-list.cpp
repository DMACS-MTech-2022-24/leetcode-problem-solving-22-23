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
    ListNode* reverseList(ListNode* head) {
        ListNode *newHead = NULL;
        ListNode *ptr = head;
        while(ptr){
            // traverse through list
            ListNode *tmp;
            tmp = newHead;
            newHead = ptr;
            ptr = ptr->next;
            newHead->next = tmp;

        }

        return newHead;
        
    }
};