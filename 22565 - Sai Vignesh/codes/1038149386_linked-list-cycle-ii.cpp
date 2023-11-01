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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode *s = head,*f = head;
        while(f!=NULL && f->next!=NULL)
        {
            s = s->next;
            f = f->next->next;
            // cout<<f->val<<" "<<s->val<<endl;
            if(f==s) break;
        }
        if(f!=s) return NULL;
       
        s = head;
        while(s!=f)
        {
            s = s->next;
            f = f->next;
        }
        return s;

        
    }
};