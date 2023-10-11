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
    ListNode* oddEvenList(ListNode* head) {
        ListNode odd,even;
        ListNode *oit=&odd,*eit=&even;
        bool flag=true;
        while(head!=NULL)
        {
            auto nxt=head->next;
            if(flag)
            {
                oit->next=head;
                oit=head;
            }
            else
            {
                eit->next=head;
                eit=head;
            }
            head->next=NULL;
            flag=not flag;
            head=nxt;
        }
        oit->next=even.next;
        return odd.next;
    }
};