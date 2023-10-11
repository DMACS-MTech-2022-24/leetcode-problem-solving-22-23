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
        unordered_map<ListNode*,int>m;
        ListNode *t=head;
        while(t!=NULL){
            if(m.find(t)==m.end())
                m[t]=1;
            else return t;
            t=t->next;
        }
        return NULL;
    }
};