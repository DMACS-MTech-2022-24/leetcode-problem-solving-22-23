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
    bool hasCycle(ListNode *head) {
        map<ListNode*,int>m;
        while(head){
            if(m.find(head)==m.end()){
                m[head]=1;
                head=head->next;
            }
            else return true;
        }
        return false;
    }
};