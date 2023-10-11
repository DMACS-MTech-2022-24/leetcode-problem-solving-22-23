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


    void reverse_util(ListNode *ptr, int len)
    {

        ListNode *head = ptr->next;

        ptr->next = NULL;

        ListNode *newHead = NULL;
        int i = 0;
        ListNode* attchpt2 = NULL;
        ListNode* attchpt1 = head;
        while(head && i < len){
            
            if(i == (len - 1))
                attchpt2 = head->next;
            ListNode *tmp = head;
            head = head->next;
            tmp->next = newHead;
            newHead = tmp;
            i++;
        }

        ptr->next = newHead;
        attchpt1->next = attchpt2;


    }


    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode *ptr = head;
        int list_len = 0;
        while(ptr){
            list_len++;
            ptr = ptr->next;
        }
        cout << list_len << endl;
        ptr = new ListNode();
        ptr->next = head;
        int group_len = 1;
        int els_proc = 0;

        while((els_proc + group_len) < list_len){
            int i = 0;
            if(group_len % 2 == 0){
                // reverse the even_numbered list if even
                cout << "Sairam " << ptr->next->val << endl;
                reverse_util(ptr, group_len);
            }
            while(i < group_len){
                ptr = ptr->next;
                i++;
            }
            els_proc += group_len;

            group_len++;
        }

        // reverse last section of list

        if((list_len - els_proc) % 2 == 0){
            cout << "sairam " << ptr->next->val<< " "<< (list_len - els_proc) << endl;
            reverse_util(ptr, (list_len - els_proc));
        }
        return head;

    }
};