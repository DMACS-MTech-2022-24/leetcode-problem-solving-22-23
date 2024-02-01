class Solution {
public:
    int countElements(vector<int>& nums) {
        int minn = *min_element(nums.begin(), nums.end());
        int maxx = *max_element(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < maxx && nums[i] > minn)
                count++;
        }
        return count;
    }
};