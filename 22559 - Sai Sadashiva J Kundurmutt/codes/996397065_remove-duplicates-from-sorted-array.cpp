class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        auto it = nums.begin();
        int i = 0, j = i + 1;
        while (i < nums.size() && i != 1000){
            
            while(j < nums.size() && nums[i] == nums[j]){
                nums[j++] = 1000;
            }
            if(j < nums.size()){
                int temp = nums[j];
                nums[j] = nums[i + 1];
                nums[i + 1] = temp;
                j++;
            }
            i++;
        }
        // sort(nums.begin(), nums.end());

        while(nums[nums.size() - 1] == 1000){
            nums.pop_back();
        }
        return nums.size();
        
    }
};