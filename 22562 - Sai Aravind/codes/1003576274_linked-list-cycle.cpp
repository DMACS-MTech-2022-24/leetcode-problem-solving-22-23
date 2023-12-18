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
         set<ListNode*> S;
         for(;head!=NULL;head=head->next)
         {
             if(not S.insert(head).second)
                return true;
         }
         return false;
    }
};