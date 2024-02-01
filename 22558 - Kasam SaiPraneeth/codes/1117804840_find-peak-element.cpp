class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = nums.size();
        if(s==1){
            return 0;
        }
        int minn = INT_MIN;
        nums.insert(nums.begin()+0, minn);
        nums.insert(nums.end()+0, minn);
        int m = nums.size();
        for(int i = 1; i<m; i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                return i-1;
                break;
            }
        }
        return 0;
    }
};