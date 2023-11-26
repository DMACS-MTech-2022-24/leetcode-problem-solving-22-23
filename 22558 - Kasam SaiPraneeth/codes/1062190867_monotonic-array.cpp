class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increasing = true,decreasing = true;
        for(int i =1; i<n; i++){
            if(nums[i-1] < nums[i]){
                decreasing = false; 
                // continue;
            }
            else if(nums[i-1] > nums[i]){
                increasing = false; 
                // continue;
            }
            if(!increasing &&!decreasing)
                break;

        }
        return increasing || decreasing;
    }
};