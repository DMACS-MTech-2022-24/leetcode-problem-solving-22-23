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
    void reorderList(ListNode* head) {
        stack<ListNode* >nodeStack;
        ListNode * temp = head;
        int count=0;
        
        while(temp != NULL){
            nodeStack.push(temp);
            temp= temp->next;
            count += 1;
        }
        int middleOfStack = ceil(count/2);
        
        
        temp=head;
        if(head->next == NULL || head->next->next == NULL) 
            return ;

        else{
            ListNode *t2 = temp->next;
            while(t2 != t2->next->next){
                temp->next = nodeStack.top();
                nodeStack.top()->next = t2;
                
                nodeStack.pop();
                t2= t2->next;
                temp=temp->next->next;
                
            }
            if(count % 2 == 1){
                t2 = t2->next;
                t2->next = NULL;
            }
            else
                t2->next = NULL;
        }
    }
};