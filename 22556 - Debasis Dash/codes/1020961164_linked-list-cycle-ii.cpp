/**L
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
        int flag=0;
        ListNode *iter=head, *prev=head;
        if (head == NULL || head->next == NULL) return NULL;


        while(iter != NULL && iter->next != NULL){
            iter = iter->next->next;
            prev = prev->next;

            if (prev == iter){
                flag=1;
                break;
            }           
        }
        if (flag==0) 
            return NULL;
        else{
            prev=head;
            while(prev != iter){
                prev=prev->next;
                iter=iter->next;
            }
            
        }
        return iter;

    }
};