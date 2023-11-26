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
    ListNode* doubleIt(ListNode* head) {
        ListNode *h1 = new ListNode(0,head); // points to l1;
        ListNode *tmp = h1;

        while(head!=NULL)
        {
            head->val = head->val * 2;
            if(head->val>9)
            {
                // cout<<"yes greater"<<" ";
                head->val = head->val-10;
                tmp->val+=1;
            }
            // cout<<head->val<<" "<<tmp->val<<endl;
            tmp = tmp->next;
            head = head->next;
        }

        if(h1->val>0) return h1;
        return h1->next;
        
    }
};