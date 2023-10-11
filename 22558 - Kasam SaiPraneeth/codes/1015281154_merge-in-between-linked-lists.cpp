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
        while(count1 < a){
            count1++;
            t1 = t1->next;
        }

        cout<<t1->val<<endl;
        while(count2 < b){
            count2++;
            t2 = t2->next;
        }
        cout<<t2->val<<endl;

        while(tmp1->next != nullptr){
            tmp1 = tmp1->next;
        }

        tmp1->next =t2->next->next;
        t1->next = list2;
        
        return list1;
    }
};