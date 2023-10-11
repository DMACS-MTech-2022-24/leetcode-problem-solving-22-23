class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>window;
        vector<int>ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            window.insert(nums[i]);
            if(window.size() == k){
                auto it = window.end();
                it--;
                ans.push_back(*it);
                window.erase(window.find(nums[i - k + 1]));
            }
        }

        
        return ans;
    }
};