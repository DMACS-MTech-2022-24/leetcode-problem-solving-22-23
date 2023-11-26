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
        if(left == right) return head; // returns head when left and right are same
        // if only one node with left =1 right=1 returns true
        if(head->next == nullptr && left ==1 && right ==1)return head; 
        
        ListNode *f, *f1, *s1, *s, *last;
        // create a dummy node tmp and point it to the head 
        ListNode *tmp = new ListNode();
        tmp->next = head;
        // curr and t pointes at the dummy node
        ListNode *curr =tmp,*t=curr;
        // creating a integer type stack
        stack<int> stack;
        int count=0;
        // works until the curr!=null
        while(curr){
            if(count  == left-1){// if the count equal to left-1
                // f1 &f points at the curr position
                f1 = curr;
                f = curr;
            }
            if(count == right){ //if count equal to right
                // s1 &s points at the curr position
                s = curr;
                s1 = curr;
            }
            curr = curr->next;
            count++;
        }
        // pushing the elements from the left to the right postion into stack
        while(f != s){ // untill the f !=s
            stack.push(f->next->val);
            f = f->next;
        }

        while(!stack.empty()){//works untill the stack is empty
            //f1next points to the new node with stack top val
            f1->next = new ListNode(stack.top());
            stack.pop();//pop the val from stack
            f1 = f1->next; // move the f1 to f1next
        }
        //pointing the f1next to the val next to the right position in linked list
        f1->next = s1->next;
        if(left == 1)return t->next;// if left is equal to 1, return the tnext
        else return head; // else return  the head
      
    }
};