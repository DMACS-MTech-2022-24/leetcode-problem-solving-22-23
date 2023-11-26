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
        ListNode *t1 = list1, *t2 = list1, *tmp1 = list2;
        int count1 = 1 ,count2=1;
        // in this loop t1 is moving towards the ath node 
        while(count1 < a){
            count1++;
            t1 = t1->next;
        }
        //at the end t1 points to the 1 node before the  ath node 
        // in this loop t2 is moving towards the bth node 
        while(count2 < b){
            count2++;
            t2 = t2->next;
        }
        //at the end t2 points to the 1 node before the  bth node 
        // in this loop traversing to the end of the list 2
        while(tmp1->next != nullptr){
            tmp1 = tmp1->next;
        }
        //at the end tmp1 points to the last element in the linked list
        tmp1->next =t2->next->next; //pointing the last node next of list 2 to t2-next-next
        t1->next = list2; //then pointing the t1-next to then list2
        return list1; //returns the merge in between linked list
    }
};