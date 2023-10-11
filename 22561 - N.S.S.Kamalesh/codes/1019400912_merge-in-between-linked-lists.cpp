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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *tmp1=list1;
        int i=0;
        while(i<a-1){
            tmp1=tmp1->next;
            ++i;
        }
        ListNode*tmp2=tmp1;
        while(i<=b){
            tmp1=tmp1->next;
            ++i;
        }
        tmp2->next=list2;
        ListNode*tmp3=list2;
        while(list2->next){
            list2=list2->next;
        }
        list2->next=tmp1;
        return list1;
    }
};