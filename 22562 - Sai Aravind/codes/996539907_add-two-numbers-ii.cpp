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
        ListNode rl1,rl2,New;
        int carry=0;
        int len1=0,len2=0;
        
        while(l1!=NULL)
        {
            auto tmp=l1->next;
            l1->next=rl1.next;
            rl1.next=l1;
            l1=tmp;
            ++len1;
        }
        while(l2!=NULL)
        {
            auto tmp=l2->next;
            l2->next=rl2.next;
            rl2.next=l2;
            l2=tmp;
            ++len2;
        }
        if(len1<len2)
        {
            swap(rl1.next,rl2.next);
        }
        
        
        for(auto i2=rl2.next,i1=rl1.next;i1!=NULL;i1=i1->next)
        {
            auto X=i1->val+carry;
            if(i2!=NULL)
            {
                X+=i2->val;
                i2=i2->next;
            }

            New.next=new ListNode(X%10,New.next);
            carry=X/10;
        }

        if(carry>0)
        {
            New.next=new ListNode(carry,New.next);
        }
        return New.next;
    }
};