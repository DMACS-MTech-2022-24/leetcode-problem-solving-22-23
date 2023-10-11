class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i =0; i<nums1.size(); i++){
            // create new stack for every i
            stack<int> st;
            for(int j = nums2.size()-1 ; j>=0 ; j--){
            // if the nums2 val is greather then nums1 then push the nums2 val,
            //else if nums2 equals to nums1 then check if the stack is empty or not,
            // if empty pushback -1 to ans else pushback stacktop to ans
                if(nums2[j] > nums1[i]){
                    st.push(nums2[j]);
                }
                else if(nums2[j] == nums1[i]){
                    if(!st.empty()){
                        ans.push_back(st.top());
                        // st.clear();
                    }
                    else
                        ans.push_back(-1);
                }
            }
        }
        return ans;
    }
};