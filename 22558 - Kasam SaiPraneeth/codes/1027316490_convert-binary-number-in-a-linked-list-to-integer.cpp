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
    int getDecimalValue(ListNode* head) {
        int count =0; //to count number of nodes in the linked list
        ListNode *tmp = head, *t=head;
        //this loop is for counting the no.of nodes
        while(tmp){
            count++;
            tmp = tmp->next;
        }
        int sum= 0;//decimal value of the number in the linked list
        count-=1;
        // this loop is for calculation of the decimal vlaue
        while(t){
            sum+=(t->val)*pow(2,count); //val in the node * 2^count
            t = t->next;
            count--;

        }
        return sum; //returns the decimal value
    }
};