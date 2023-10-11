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
        ListNode *prv=NULL;
        if(list1==NULL and list2!=NULL)
            return list2;
        else if(list1!=NULL and list2==NULL)
            return list1;
        if(list1!=NULL and list2!=NULL and list2->val<list1->val)
        {
            swap(list1,list2);
        }
        auto start=list1;
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val<=list2->val)
            {
                prv=list1;
                list1=list1->next;
            }
            else
            {
                auto tmp =list2->next;
                prv->next=list2;
                list2->next=list1;
                prv=list2;
                list2=tmp;
            }
        }
        if(list2!=NULL)
            prv->next=list2;
        return start;
    }
};