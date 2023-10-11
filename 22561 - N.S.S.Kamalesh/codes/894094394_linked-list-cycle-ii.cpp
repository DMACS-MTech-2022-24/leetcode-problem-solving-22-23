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
        if(head==NULL||head->next==NULL)
            return NULL;
        ListNode *t1=head;
        set<ListNode*>s;
        while(t1!=NULL&&s.find(t1)==s.end()){
            s.insert(t1);
            t1=t1->next;
        }
        return t1;
    }
};