class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp = head;
        int count = 1;
        while(tmp->next != NULL){
            count++;
            tmp = tmp->next;
        }
        if(count == n){
            head = head->next;
            return head;
        }

        count = count - n;
        int i = 1;
        tmp = head;
        while(i<count){
            i++;
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
        return head;
    }
};