class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        if(nums.size()==1){
            if(nums[0]==val)
                return 0;
            else return 1;
        }
        int i=0,j=nums.size()-1,tmp;
        while(i<j){
            while(i<j&&nums[i]!=val)++i;
            if(nums[i]!=val) return i+1;
            else if(i==j) return i;
            else while(j>i&&nums[j]==val)--j;
            if(nums[j]==val) return j;
            else if(j>i){
                tmp=nums[i];nums[i]=nums[j];nums[j]=tmp;
                ++i;--j;
            }
            else if(i==j) return j+1;
        }
        if(nums[i]==val) return i;
        return i+1;
    }
};