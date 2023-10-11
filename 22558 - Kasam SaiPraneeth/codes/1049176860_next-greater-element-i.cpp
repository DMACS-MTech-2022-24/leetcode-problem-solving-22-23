class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i =0; i<nums1.size(); i++){
            stack<int> st;
            for(int j = nums2.size()-1 ; j>=0 ; j--){
                if(nums2[j] > nums1[i]){
                    st.push(nums2[j]);
                }
                else if(nums2[j] == nums1[i]){
                    if(!st.empty())
                        ans.push_back(st.top());
                    else
                        ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};