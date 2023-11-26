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
    ListNode* reverseList(ListNode* head) {
       ListNode *tmp, *current=head, *prev=nullptr;
       //tmp is simple pointer and current is pointing to head, then prev is pointer pointing to nullptr

       while(current != nullptr){ //goes till the end of the linked list
           tmp = current->next; //pointing tmp to current next
           current->next = prev; //current next is pointing to prev
           prev = current; //prev is pointing at current
           current = tmp; // current is pointin at tmp
        }
    return prev; //returns reversed list
    }
};