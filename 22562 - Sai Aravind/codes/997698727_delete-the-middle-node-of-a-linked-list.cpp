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
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
        ListNode *prv=head,*it=head->next->next;
        while(it!=NULL and it->next!=NULL)
        {
            prv=prv->next;
            it=it->next->next;
        }
        auto mid=prv->next;
        prv->next=prv->next->next;
        delete mid;
        return head;
    }
};