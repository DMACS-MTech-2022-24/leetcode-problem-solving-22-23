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
        ListNode New;
        ListNode *it=&New;
        
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val<=list2->val)
            {
                it->next=list1;
                list1=list1->next;
            }
            else
            {
                it->next=list2;
                list2=list2->next;
            }
            it=it->next;
        }
        if(list1!=NULL)
            it->next=list1;
        else
            it->next=list2;
        return New.next;
    }
};