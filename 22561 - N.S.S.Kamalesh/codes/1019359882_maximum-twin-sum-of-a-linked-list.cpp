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
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int s=0,tmp;
        for(int i=0;i<v.size()/2;++i){
            tmp=v[i]+v[v.size()-i-1];
            if(s<tmp)
                s=tmp;
        }
        return s;
    }
};