class Solution {
public:
    ListNode* sortList(ListNode* head) {
       vector<int> ans;
       ListNode *tmp = head;
       if(head == NULL){
        return NULL;
       }
       ans.push_back(tmp->val);
       while(tmp->next != NULL){
           tmp = tmp->next;
           ans.push_back(tmp->val);
       }
       sort(ans.begin(),ans.end());
       tmp = head;
       int i = 0;
       for(int i =0 ;i<ans.size() ; i++){
           tmp->val = ans[i];
           tmp = tmp->next; 
        }
        return head;
    }
};