class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s=accumulate(nums.begin()+1,nums.end(),0),s1=0;
        if(nums.size()==1)
            return 0;
        if(s==s1)
            return 0;
        for(int i=1;i<nums.size();i++){
            s1+=nums[i-1];
            s-=nums[i];
            if(s1==s)
                return i;
        }
        return -1;
    }
};