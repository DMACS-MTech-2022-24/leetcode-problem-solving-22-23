class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increasing = true,decreasing = true;
        for(int i =1; i<n; i++){
            if(nums[i-1] < nums[i]){ // checking wheather increasing
                decreasing = false; // and setting decreasing false
            }
            else if(nums[i-1] > nums[i]){//checking wheather decreasing
                increasing = false; //and setting increasing false
            }
            //// if both increasing and decreasing is false break
            if(!increasing &&!decreasing)
                break;
        }
        return increasing || decreasing;
    }
};