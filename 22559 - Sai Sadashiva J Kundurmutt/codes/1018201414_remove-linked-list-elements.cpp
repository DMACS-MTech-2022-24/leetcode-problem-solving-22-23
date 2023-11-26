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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *ptr, *prev;

        prev = ptr = head;
        ListNode *tmp;
        while(ptr){
            if(ptr->val == val){

                if(ptr == head){
                    head = ptr->next;
                    // prev = head;
                    tmp = ptr;
                }else{
                    prev->next = ptr->next;
                    tmp = ptr;
                }
                ptr = ptr->next;
                delete tmp;
            }else{

                prev = ptr;
                ptr = ptr->next;
            }
        }
        return head;

    }
};