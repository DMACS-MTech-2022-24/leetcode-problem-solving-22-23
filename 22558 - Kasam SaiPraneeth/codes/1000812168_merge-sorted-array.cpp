class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j,tmp=m;
        for(i =0, j=0; i<m && j<n;){
            if(nums1[i]>nums2[j]) // checking greather then or not 
                {
                    nums1.insert(nums1.begin()+i,nums2[j]);
                    //usig insert ,inserting at the ith position
                    i++; 
                    j++;
                    ++m; //incrementing the size m
                }
            else
                i++;
        }
        // inserting remaning elements of nums2 and the end
        while(j<n){
            nums1.insert(nums1.begin()+i,nums2[j]);
            j++;i++;
        }
        nums1.resize(tmp+n); //resize to original size m+n
        
    }
};