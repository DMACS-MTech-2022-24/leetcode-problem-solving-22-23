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
    ListNode* deleteDuplicates(ListNode* head) {
        // using two pointers
        int flag =0;
        ListNode *f = head;  //f points to head
        // creating the curr node 
        ListNode *curr = new ListNode();
        curr->next = head; //and currnext pointing to the head 
        ListNode *tmp = curr;  // and one more tmp pointer to the curr

        if(!f) // if the linkied list is empty 
            return head; //returns head

        ListNode *s = head->next; // s is the 2nd pointer,points to head-next
        while(s){ //while s->next != null
            if(f->val == s->val){ //if the sval and fval are same
                flag =1; // if the val are same flage will become 1
                f->next = s->next; //fnext points to snext
                delete(s); //delete the node
                s = f->next; //then s is moved to fnext
            }
            else{// if the val are no same
                if(flag == 1){ // and  if flage is 1(means that is the last duplicat)
                    flag = 0; // so make flage 0
                    curr->next = s; //then currnext points to the s
                    f = s; // then move f to s
                    s = s->next; // then move s to snext

                    }
                else{//if the val are no same and flage=0  
                    curr = curr->next; // curr moves toe currnext
                    f = f->next; // f moves to the fnext
                    s = s->next; // s moves to the snext
                    }
                }
        }
        // this is the case where linked list contains only duplicates
        // so at the linked list become empty
        // eg [1,1]
        if(flag == 1){ //if flage ==1
            curr->next = s; //currnext =s
        }
        if(tmp == curr) return curr->next;//if tmp&curr are pointing to same,return currnext
        else return tmp->next;// are else return tmpnext
    }
};