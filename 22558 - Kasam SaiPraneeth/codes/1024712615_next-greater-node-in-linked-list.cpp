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
                result.push_back(s->val); // if the next grather is found push greatherval to result
                break; // break the inner loop when the next graether node is found
            } 
            s = s->next;//move the second pointer to the next of s
        }
        if(!s)
            result.push_back(0); // if no next greather node id found push 0

        f = f->next; // move the first pointer to the next of f

        if(f != nullptr)
            s = f->next; // move the second pointer to the next node
      }
     return result;
    }
};