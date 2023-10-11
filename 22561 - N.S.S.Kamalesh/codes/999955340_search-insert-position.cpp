class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,m;
        while(l<h){
            m=(l+h)/2;
            if(target==nums[m])return m;
            else if(target<nums[m])
                h=m;
            else
                l=m+1;
        }
        if(target==nums[l]) return l;
        else if(target<nums[l]) return l;
        return l+1;
    }
};