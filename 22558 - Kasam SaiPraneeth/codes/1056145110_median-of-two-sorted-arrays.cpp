class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int s1 = nums1.size() , s2 = nums2.size();
       if(s1 == 0 && s2 == 0) return -1;
       
       vector<int> ans;
       int i = 0, j= 0;
        while(i<s1 && j<s2){
           if(nums1[i] < nums2[j]){
               ans.push_back(nums1[i]);
               i++;
            }
            else if(nums1[i] > nums2[j]){
               ans.push_back(nums2[j]);
               j++;               
            }
            else{
                ans.push_back(nums1[i]);
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
                }
        while(i < s1){
           ans.push_back(nums1[i]);
           i++;
             }
        while(j < s2){
           ans.push_back(nums2[j]);
           j++;
            }

        int n = ans.size();
       
        double result;
        if(n%2 == 0){
            result = (ans[(n/2)-1]+ans[n/2])/2.0;
            return result;
        }
        else{
            result = ans[n/2];
            return result;
            }
    }
};
