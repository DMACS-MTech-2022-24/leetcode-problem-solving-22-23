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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp =head, *nodeFromStart;
        int cnt = 0, swapValue, kthFromEnd;
        while(temp != NULL){
            
            cnt +=1;
            if(cnt == k)
                nodeFromStart = temp;
            temp = temp->next;
            
        }
        cout << nodeFromStart->val << endl;
        cout <<cnt << endl; 
        kthFromEnd  = cnt-k;
        cout << kthFromEnd << endl;
        temp = head;
        while(kthFromEnd>0){
            cout << temp->val << endl;
            temp = temp->next;
            kthFromEnd -= 1;
            
        }
        cout << temp->val << endl;
        swapValue = nodeFromStart->val;
        nodeFromStart->val = temp->val;
        temp->val = swapValue;
        return head;
    }
};