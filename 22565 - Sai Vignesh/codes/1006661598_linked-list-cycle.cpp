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
    bool hasCycle(ListNode *head) {
        int val = 100001;
        while(head!=NULL)
        {
            if(head->val==val)
                return true;
            else head->val = val;
            head = head->next;
        }
        return false;
        
    }
};