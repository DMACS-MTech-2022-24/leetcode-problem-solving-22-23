class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
        int left = Boundary(nums , target, true);
        int right = Boundary(nums, target, false);
        
        if (left == -1 || right == -1){
            return {-1, -1};
            } 
        else {
            return {left, right};
            }
    }
    
    // using a bool varailble ,it is true if Boundary fun is call and false otherwise
    int Boundary (vector<int> & nums, int target, bool findLeft){
        vector<int> result = {-1, -1};

        int left = 0, right = nums.size()-1;
        // initialize the boundary to -1
        int boundary = -1;
        
        while (left <= right) {
            int mid = left + (right - left)/2;
            // if the nums[mid] is equal to the target then boundary is set to mid
            if (nums[mid] == target) {
                boundary = mid;
                // if the  left boundary is found right = mid-1 else left = mid -1
                if (findLeft) {
                    right = mid - 1;
                    } 
                else {
                    left = mid + 1;
                    }
                } 
            else if (nums[mid] < target) {
                left = mid + 1;
                } 
            else {
                right = mid - 1;
            }
        }
        return boundary;
    }
};