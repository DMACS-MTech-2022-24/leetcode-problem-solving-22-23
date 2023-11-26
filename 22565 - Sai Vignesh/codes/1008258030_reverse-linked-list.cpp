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
        if(head==NULL || head->next == NULL) return head;
        ListNode *h1 = head,*h2 = head->next,*h3;
        head->next = NULL;
        // more than two nodes
        while(h2->next!=NULL)
        {
            h3 = h2->next;
            h2->next = h1; 
            h1 = h2;
            h2 = h3;
        }
        h2->next = h1;
        return h2;
        
        


    }
};