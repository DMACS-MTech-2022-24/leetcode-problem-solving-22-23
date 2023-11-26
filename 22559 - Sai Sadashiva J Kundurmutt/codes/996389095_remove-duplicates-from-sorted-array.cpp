class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        auto it = nums.begin();
        int i = 0, j;
        while (i < nums.size()){
            j = i + 1;
            while(j < nums.size() && nums[i] == nums[j]){
                nums[j++] = 1000;
            }
            i++;
        }
        sort(nums.begin(), nums.end());

        while(nums[nums.size() - 1] == 1000){
            nums.pop_back();
        }
        return nums.size();
        
    }
};