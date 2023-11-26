class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
      vector<int>tar;
        for(int i =0;i < nums.size(); i++){
            tar.insert(tar.begin()+index[i],nums[i]);
        }
        return tar;
        
    }
};