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
    ListNode* insertionSortList(ListNode* head) {
        if(!head) return head;


        ListNode *sortedHead = new ListNode();
        sortedHead->next = head;

        ListNode *restHead = head->next;
        sortedHead->next->next = NULL;
        while(restHead){
            // find the insertion point now
            ListNode *sortPtr = sortedHead;
            while(sortPtr->next && restHead->val < sortPtr->next->val){
                // cout << "SP " << sortPtr->next->val << endl;
                sortPtr = sortPtr->next;
            }
            // insert node
            ListNode *tmp = restHead;
            // cout << "RH " << restHead->val << endl;
            restHead = restHead->next;
            tmp->next = sortPtr->next;
            sortPtr->next = tmp;
            




          
        }


        ListNode *rev = NULL;
        while(sortedHead->next){
            ListNode *tmp = sortedHead->next;
            sortedHead->next = sortedHead->next->next;
            tmp->next = rev;
            rev = tmp;

        }
        return rev;


    }
};