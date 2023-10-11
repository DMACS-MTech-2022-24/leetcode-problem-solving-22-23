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
    bool isPalindrome(ListNode* head) {
        ListNode *tmp =head,*t=head;
        stack<int> s;
        while(tmp){
            s.push(tmp->val);
            tmp = tmp->next;
        }
        while(t != nullptr){
            if(t->val == s.top()){
                t = t->next;
                s.pop();
            }
            else
                return 0;
        }
    return 1;
    }
};