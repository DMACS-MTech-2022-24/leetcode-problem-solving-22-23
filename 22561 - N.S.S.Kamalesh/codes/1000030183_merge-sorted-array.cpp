class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,tmp=m;
        while(i<m&&j<n){
            if(nums1[i]==nums2[j]){
                nums1.insert(nums1.begin()+i+1,nums2[j]);
                ++j;++i;
                ++m;
            }
            else if(nums1[i]>nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                ++j;++m;
            }
            ++i;
        }
        if(i==m){
            while(j<n){
                nums1.insert(nums1.begin()+i,nums2[j]);
                ++i;
                ++j;
            }
        }
        nums1.resize(tmp+n);
    }
};