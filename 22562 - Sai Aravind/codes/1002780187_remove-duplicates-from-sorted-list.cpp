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
        for(auto *prv=&dummy,*it=head;it!=NULL;)
        {
            if(prv->val==it->val)
            {
                prv->next=it->next;
                delete it;
                it=prv->next;
            }
            else
            {
                prv=it;
                it=it->next;
            }
        }
        return dummy.next;
    }
};