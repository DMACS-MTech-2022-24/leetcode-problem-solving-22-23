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
        ListNode *prv=NULL,*mid=head,*it=head;
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
        while(it!=NULL and it->next!=NULL)
        {
            prv=mid;
            mid=mid->next;
            it=it->next->next;
        }
        prv->next=mid->next;
        delete mid;
        return head;
    }
};