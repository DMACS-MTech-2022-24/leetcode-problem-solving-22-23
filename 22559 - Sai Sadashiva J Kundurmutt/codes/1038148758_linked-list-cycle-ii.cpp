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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow, *fast;
        if(!head) return NULL;
        slow = fast = head;
        do{
            slow = slow->next;
            fast = fast->next;
            
                cout <<  "slow present" << endl;
            
            if(fast && fast->next){
                fast = fast->next;
            }else{
                cout << "Returning null\n";
                return NULL;
            }

        }while(slow && slow != fast);
        if(!slow)
            return NULL;

        // slow = fast so cycle exists

        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }

        return slow;

        
    }
};