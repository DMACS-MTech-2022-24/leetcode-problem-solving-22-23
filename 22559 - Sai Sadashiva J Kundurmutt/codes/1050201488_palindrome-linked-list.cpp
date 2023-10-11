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
        int len = 0;
        ListNode *ptr = head;
        while(ptr && ++len){
            ptr = ptr->next;
        }

        int h = len/2;
        ListNode *newhead = NULL;
        ptr = head;
        while(h--){
            ListNode *tmp = ptr;
            ptr = ptr->next;
            tmp->next = newhead;
            newhead = tmp;
        }
        ListNode *ptr2;
        if(len % 2)
            ptr2 = ptr->next;
        else
            ptr2 = ptr;

        ptr = newhead;
        while(ptr && ptr2){
            if(ptr->val != ptr2->val)
                return false;
            ptr = ptr->next;
            ptr2 = ptr2->next;
        }
        return true;

    }
};