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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode *tmp = head, *t = head;
        // this is for counting no.of nodes in the linked list
        while(tmp){
            count++;
            tmp = tmp->next;
        }

        count/=2;//calculating the middle node
        int c=0;
        while(t){
            if(c == count){ //untill the c is equal to count 
                return t; //return the pointer of the middle node
            }
            c++; //increment c
            t=t->next; //t is tnext
        }
        return t;
    }
};