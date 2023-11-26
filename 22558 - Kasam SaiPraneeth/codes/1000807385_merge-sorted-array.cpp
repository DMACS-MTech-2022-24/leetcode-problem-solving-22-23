class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,tmp=m;
        for(i =0, j=0; i<m && j<n;){
            if(nums1[i]>nums2[j])
                {
                    nums1.insert(nums1.begin()+i,nums2[j]);
                    i++;
                    j++;
                    ++m;
                }
            else
                i++;
        }
        while(j<n){
            nums1.insert(nums1.begin()+i,nums2[j]);
            j++;i++;
        }
        nums1.resize(tmp+n);
        
    }
};