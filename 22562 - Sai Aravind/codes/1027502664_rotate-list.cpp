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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 or head==NULL or head->next==NULL)
            return head;
        ListNode dummy(0,head);
        ListNode *i=&dummy,*j=&dummy;
        int sz=0;
        for(;j->next!=NULL and sz<k;++sz)
        {
            j=j->next;
        }
        if(j->next==NULL)
        {
            k=k%sz;
            // cout<<k<<"\n";
            if(k==0)
                return head;
            for(j=&dummy,sz=0;j->next!=NULL and sz<k;++sz)
            {
                j=j->next;
            }
        }
        while(j->next!=NULL)
        {
            j=j->next;
            i=i->next;
        }
        auto tmp=i->next;
        i->next=NULL;
        j->next=dummy.next;
        dummy.next=tmp;
        return dummy.next;
    }
};