class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>stk;
        unordered_map<int, int>nums1_set;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for(int i = 0; i < n1; i++){
            nums1_set[nums1[i]] = i;
        }
        vector<int>ans(n1, -1);
        for(int i = 0; i < n2; i++){
            
            while(!stk.empty() && nums2[i] > stk.top()){
                if(nums1_set.find(stk.top()) != nums1_set.end()){
                    ans[nums1_set[stk.top()]] = nums2[i];
                }
                stk.pop();
            }
            stk.push(nums2[i]);
            

        }
        

        return ans;
    }
};