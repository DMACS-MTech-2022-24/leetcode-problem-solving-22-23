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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head; 
        ListNode* t1 = head,*t2 = head->next;
        //initial head change, atleast two nodes exist
        head = t2; t1->next = t2->next; t2->next = t1;

        while(t1->next!=NULL && t1->next->next !=NULL)
        {
            t2 = t1->next;
            t1->next = t2->next;
            ListNode* t3 = t1->next->next;
            t1->next->next = t2;
            t2->next = t3;

            t1 = t2; 
        }

        return head;

        
    }
};