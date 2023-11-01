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
        stack<int> s;
        if(head==NULL || head->next == NULL) return true;
        ListNode *t = head;
        while(t!=NULL)
        {
            s.push(t->val);
            t = t->next;
        }
        while(!s.empty())
        {
            if(head->val != s.top()) return false;
            head = head->next; s.pop();
        }
        return true;

    }
};