class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int k=nums.size();
        for(int i=0;i<k;i++)
        {
            if(nums[i] != 0)
            {
               nums[j++]=nums[i]; 
            }
        }
        
        for(int i=j ; i<k ; i++)
        {
            nums[i]=0;
        }
    }
};