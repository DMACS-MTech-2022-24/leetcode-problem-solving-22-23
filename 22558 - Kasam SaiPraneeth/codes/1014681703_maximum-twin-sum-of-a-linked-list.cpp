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
        stack<int> s;
        int count=0;
        ListNode *tmp = head;
        while(tmp){
            s.push(tmp->val);
            count++;
            tmp = tmp->next;
        }

        int sum =0, c=0,maxx=0;
        while(head && c < count/2){
            sum = (head->val)+s.top();
            s.pop();
            c++;
            head = head->next;
            maxx = max(maxx,sum);
        }
        return maxx;
    }
};