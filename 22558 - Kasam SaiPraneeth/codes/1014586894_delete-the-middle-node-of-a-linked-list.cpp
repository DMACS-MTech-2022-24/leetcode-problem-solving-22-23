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
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0;
        ListNode *tmp = head,*t = head;
        // this is for counting the number of nodes in the linked list
        while(tmp){
            count++;
            tmp = tmp->next;
        }
        count/=2; //finding the middle node

        // if only 1 node,after deletion there is no node, return null
        if(head->next == nullptr){
            return nullptr;
        }

        int c=1; // so start the c from the 2nd index in the linked list
        ListNode *first = head->next,*second = head;

        while(c!=count){ // increment the c untill c reaches count
                c++;
                first = first->next;
                second = second->next;
            }
            
            second->next = second->next->next; //once c==count then dot this to remove the node
            delete first;//delet the middle node

    return head;//return the head
    }
};