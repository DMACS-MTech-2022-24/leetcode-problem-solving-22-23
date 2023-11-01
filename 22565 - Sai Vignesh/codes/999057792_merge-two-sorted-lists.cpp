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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode d1(0,list1);             
        ListNode *h1 = &d1,*h2 = list1;

        while(h2!=NULL && list2!=NULL)
        {
            if(list2->val <= h2->val)
            {
                h1->next = list2;
                list2 = list2->next;
                h1->next->next = h2;
            }
            else h2 = h2->next;
            h1 = h1->next;
        }
        if(list2!=NULL)
            h1->next = list2;
        
        return d1.next;
    }
};