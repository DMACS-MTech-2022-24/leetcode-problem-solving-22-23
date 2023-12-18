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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int fs=0;
        vector<vector<int>> out(m,vector<int>(n,-1));
        int i=0,j=0;
        int i_s=0,j_s=0;
        while(head!=NULL)
        {
            out[i][j]=head->val;
            switch(fs)
            {
                case 0:
                    if(j==n-1)
                    {
                        ++fs;
                        ++i_s;
                        --n;
                        ++i;
                        break;
                    }
                    ++j;
                    break;
                case 1:
                    if(i==m-1)
                    {
                        ++fs;
                        --m;
                        --j;
                        break;
                    }
                    ++i;
                    break;
                case 2:
                    if(j==j_s)
                    {
                        ++fs;
                        ++j_s;
                        --i;
                        break;
                    }
                    --j;
                    break;
                case 3:
                    if(i==i_s)
                    {
                        fs=0;
                        ++j;
                        break;
                    }
                    --i;
                    break;
            }
            head=head->next;
        }
        return out;
    }
};