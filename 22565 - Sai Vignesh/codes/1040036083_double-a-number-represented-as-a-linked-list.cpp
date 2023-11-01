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
        ListNode *tmpnxt = head;

        while(tmpnxt!=NULL)
        {
            tmpnxt->val = tmpnxt->val * 2;
            if(tmpnxt->val>9)
            {
                // cout<<"yes greater"<<" ";
                tmpnxt->val = tmpnxt->val%10;
                tmp->val+=1;
            }
            // cout<<tmpnxt->val<<" "<<tmp->val<<endl;
            tmp = tmp->next;
            tmpnxt = tmpnxt->next;
        }

        if(h1->val>0) return h1;
        else return h1->next;
        
    }
};