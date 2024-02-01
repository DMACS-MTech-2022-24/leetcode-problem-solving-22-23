class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> stk;
        ListNode *tmp = head;

        while(tmp){
            stk.push(tmp->val);
            tmp = tmp->next;
        }
        tmp = head;
        while(!stk.empty()){
            tmp->val = stk.top();
            stk.pop();
            tmp = tmp->next;
        }
        return head;
    }
};