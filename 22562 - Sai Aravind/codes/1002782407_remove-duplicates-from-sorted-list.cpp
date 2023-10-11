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
        ListNode dummy(-200,head);
        for(auto *prv=&dummy;prv->next!=NULL;)
        {
            auto it=prv->next;
            if(prv->val==it->val)
            {
                prv->next=it->next;
                delete it;
            }
            else
                prv=it;
        }
        return dummy.next;
    }
};