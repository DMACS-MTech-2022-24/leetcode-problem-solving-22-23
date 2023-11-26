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
        ListNode *first = head, *second = head;
        if(first == nullptr){
            return first;
        }
        while(head &&head->val == val)
                head = head->next;
        if(!head||!head->next) return head;
        first=head->next;
        second=head;
        while(first){
            if(first->val == val){
                cout<<second->val;
                second->next = second->next->next;
                delete first;
                first = second->next;
            }
            else{    
                first = first->next;
                second = second->next;
            }
        }
        return head;
    }
};