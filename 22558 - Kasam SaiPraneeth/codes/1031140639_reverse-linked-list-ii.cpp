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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right) return head;
        if(head->next == nullptr && left ==1 && right ==1)return head;
        ListNode *f, *f1, *s1, *s, *last;
        ListNode *tmp = new ListNode();
        tmp->next = head;
        ListNode *curr =tmp,*t=curr;
        stack<int> stack;
        int count=0;
        while(curr){
            if(count  == left-1){
                f1 = curr;
                f = curr;
            }
            if(count == right){
                s = curr;
                s1 = curr;
            }
            curr = curr->next;
            count++;
        }
        while(f != s){
            stack.push(f->next->val);
            f = f->next;
        }
        while(!stack.empty()){
            f1->next = new ListNode(stack.top());
            stack.pop();
            last = f1;
            f1 = f1->next;
        }
        f1->next = s1->next;
        if(left == 1)return t->next;
        else return head;
      
    }
};