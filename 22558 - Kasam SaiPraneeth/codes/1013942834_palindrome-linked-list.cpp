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
        ListNode *tmp =head,*t=head; //two pointers
        stack<int> s; //stack
        while(tmp){ //traverse the linked list and push into stack
            s.push(tmp->val); //push value into stack
            tmp = tmp->next;
        }
        while(t != nullptr){ 
            if(t->val == s.top()){ // if val and top are equal
                t = t->next; //move t to next in the linked list 
                s.pop(); //pop the top elememt in the stact
            }
            else
                return 0; //if not equal return false
        }
    return 1; //returns true only if the given string is palindrome
    }
};