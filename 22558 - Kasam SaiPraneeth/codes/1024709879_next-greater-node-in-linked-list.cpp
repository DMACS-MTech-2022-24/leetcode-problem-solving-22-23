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
    vector<int> nextLargerNodes(ListNode* head) {
    vector<int> result;
    ListNode *f = head, *s = head->next;
    while(f){
        while(s){
            if(s->val > f->val){
                result.push_back(s->val);
                break;
            } 
            s = s->next;
        }
        if(!s)
            result.push_back(0);
        f = f->next;
        if(f != nullptr)
            s = f->next;
      }
     return result;
    }
};
