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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *h1 = l1,*h2 = l2;
        int carry=0;
        while(h1->next!=NULL && h2->next!=NULL)
        {
            // cout<<h1->val <<" "<<h2->val<<" "<<carry<<endl;
            h1->val = h1->val + h2->val + carry;
            if(h1->val>=10)
            {
                carry = 1;
                h1->val = h1->val%10;
                // cout<<"carry "<<h1->val<<endl;
            }
            else carry=0;

            h1 = h1->next;h2 = h2->next;            
        }

// when only one element is left
        h1->val = h1->val + h2->val + carry;
        if(h1->val>=10)
        {
            carry = 1;
            h1->val = h1->val%10;
        }
        else carry=0;
//

        if(h1->next == NULL)
        {
            h1->next = h2->next;
        } 

        if(h1->next==NULL)
        {
            if(carry)   h1->next = new ListNode(1);
            return l1;
        }   

        h1 = h1->next;
        h2 = h1->next;

        while(h2!=NULL)
        {
            h1->val = h1->val + carry;
            if(h1->val>=10)
            {
                carry = 1;
                h1->val = h1->val%10;
            }
            else carry=0;
            h1 = h1->next;
            h2 = h2->next;
        }
        h1->val = h1->val + carry;
        if(h1->val>=10)
        {
            carry = 1;
            h1->val = h1->val%10;
            h1->next = new ListNode(1);
        }
        // else carry=0;


        return l1;        
    }
};