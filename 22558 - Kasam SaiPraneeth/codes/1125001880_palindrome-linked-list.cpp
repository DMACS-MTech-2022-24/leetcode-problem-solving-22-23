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
    ListNode *reverse(ListNode *head){
        ListNode *tmp , *current = head, *prev = nullptr;
        while(current != NULL){
            tmp = current->next;
            current->next = prev;
            prev = current;
            current = tmp;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *fast = head , *slow = head;
        // this is used to find the middle of the linked list
        while(fast != NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
       // rev pointer will point to the head of the reversed linked list.
        ListNode *rev = reverse(slow);
        ListNode *newv = head;
        while(rev != NULL){
            if(newv->val != rev->val) return false;
                newv = newv->next;
                rev = rev->next;
        }
        return true;
    }
};