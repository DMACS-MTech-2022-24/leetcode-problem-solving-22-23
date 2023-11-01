class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size(),tmp;
        if(nums.size()==0)
            return 0;
        while(true)
        {
            while(i<j && nums[i] != val)
                ++i;
            while(i<j && nums[--j] == val){}
            if(i<j)
            {   
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
                // ++i;--j;
            }
            else break;
        }
        return i;
    }
};