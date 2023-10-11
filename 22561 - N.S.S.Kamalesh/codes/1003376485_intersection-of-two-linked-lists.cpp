/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tmp1=headA;;
        map<ListNode *,int>m;
        while(tmp1!=NULL){
            m[tmp1]=1;
            tmp1=tmp1->next;
        }
        tmp1=headB;
        while(tmp1!=NULL){
            if(m.find(tmp1)!=m.end()) return tmp1;
            else tmp1=tmp1->next;
        }
        return NULL;
    }
};