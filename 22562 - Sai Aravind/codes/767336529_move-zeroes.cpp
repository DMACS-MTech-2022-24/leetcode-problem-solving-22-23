class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto size = nums.size();
        nums.erase(std::remove_if(nums.begin(), nums.end(), [&](const int& i) {return i== 0;}),nums.end());
        nums.insert(nums.end(),size-nums.size(),0);       
    }
};