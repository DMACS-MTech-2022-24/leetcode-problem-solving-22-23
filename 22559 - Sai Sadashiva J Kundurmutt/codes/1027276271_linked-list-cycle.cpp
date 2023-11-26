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
    bool hasCycle(ListNode *head) {
        if(!head)   return false;
        ListNode *fast, *slow;

        slow = fast = head;

        do{
            slow = slow->next;
            fast = fast->next;
            if(fast){
                // cout << "Sairam" << endl;
                fast = fast->next;
            }else{
                return false;
            }
            // if(!fast){
            //     cout << "sanull" << endl;
            // }
        }while(fast && slow != fast);

        if(!fast){
            return false;
        }else{
            return true;
        }
    }
};