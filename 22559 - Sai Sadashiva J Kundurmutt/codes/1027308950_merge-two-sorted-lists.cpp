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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(!list1){
            return list2;
        }else if(!list2){
            return list1;
        }else{
            if(list2->val < list1->val){
                ListNode *tmp;
                tmp = list2;
                list2 = list1;
                list1 = tmp;
            }
            
        }
        ListNode *ptr1, *ptr2;
        ptr1 = list1;
        ptr2 = list2;

        while(ptr1->next && ptr2){
            if(ptr2->val < ptr1->next->val){
                ListNode *tmp = ptr2;
                ptr2 = ptr2->next;
                tmp->next = ptr1->next;
                ptr1->next = tmp;
                ptr1 = ptr1->next;
            }else{
                ptr1 = ptr1->next;
            }
        }

        if(!ptr1->next){
            ptr1->next = ptr2;
        }
        return list1;


    }
};