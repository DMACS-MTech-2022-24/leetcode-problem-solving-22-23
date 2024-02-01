class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        // Calculate the sum of the first k elements
        for(int i =0; i < k ; i++){
                sum += nums[i];
        }

        double ans = sum;
        
        // Sliding the window and updating the sum for the remaining elements
        for(int j = k ; j<nums.size() ; j++){
           sum += nums[j] - nums[j - k];
           ans = max(ans, sum);
        }
        return ans/k;
    }
};
