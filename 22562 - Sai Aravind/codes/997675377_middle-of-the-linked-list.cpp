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
    ListNode* middleNode(ListNode* head) {
        ListNode *i=head,*j=head;
        bool flag=true;

        while(j!=NULL)
        {
            flag=not flag;
            if(flag)
                i=i->next;
            j=j->next;
        }
        return i;
    }
};