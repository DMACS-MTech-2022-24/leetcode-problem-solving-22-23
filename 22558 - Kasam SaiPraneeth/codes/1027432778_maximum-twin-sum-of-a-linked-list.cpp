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
    int pairSum(ListNode* head) {
        // size of linke list is even
        stack<int> s; //creating a stack
        int count=0;//initializating the count to number of elements in stack
        ListNode *tmp = head;
        // this loop is used to push the elements to the stack
        while(tmp){
            s.push(tmp->val);
            count++;
            tmp = tmp->next;
        }

        int sum =0, c=0,maxx=0;
        // this is used to calulate the sum of the twin elements and finds the max in it
        while(c < count/2){ //untill half of the linked list
            sum = (head->val)+s.top(); // sum is one linked list and one top element of stack
            s.pop();
            c++;
            head = head->next;
            maxx = max(maxx,sum); //finding the max of the maxxs
        }
        return maxx; //returns the max
    }
};