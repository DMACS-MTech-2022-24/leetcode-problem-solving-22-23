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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0,head);
        auto *h=&dummy,*l=dummy.next;

        if(k==1)
            return head;
        // h->next points to a k-group's 1st element
        // l points to the next k-group's 1st element
        while(h!=NULL)
        {
            auto n=0;
            while(l!=NULL and n<k)
            {
                ++n;
                l=l->next;
            }
            // If there is no more k-groups, return
            if(n!=k)
                return dummy.next;
            // After reversal the 1st element of k-groups will
            //  become previous to the next k-group's 1st element.
            auto next_h=h->next;
            while(next_h->next!=l)
            {
                auto ii=next_h->next;
                auto tmp=h->next;
                h->next=ii;
                next_h->next=ii->next;
                ii->next=tmp;
            }
            h=next_h;
        }
        return dummy.next;
    }
};