/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // copy the next value of the node to the present node value
        node->val = node->next->val;
        // update the prsent next to the next node next
        node->next = node->next->next;
        
    }
};