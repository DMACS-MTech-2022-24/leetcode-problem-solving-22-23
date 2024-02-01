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
    vector<int> insort(vector<int> & ans){
        int n = ans.size();
        for(int i = 1; i<n ; i++){
            int key = ans[i];
            int j = i-1;
            while(j >=0 && ans[j] > key){
                ans[j + 1] = ans[j];
                j--;
            }
            ans[j + 1] = key;
        }
        return ans;
    }
    ListNode* insertionSortList(ListNode* head) {
        vector<int> ans;
        ListNode* tmp = head;
        if (head == NULL) {
            return NULL;
        }
        ans.push_back(tmp->val);
        while (tmp->next != NULL) {
            tmp = tmp->next;
            ans.push_back(tmp->val);
        }
        insort(ans);
        tmp = head;
        int i = 0;
        for (int i = 0; i < ans.size(); i++) {
            tmp->val = ans[i];
            tmp = tmp->next;
        }
        return head;
    }
};