class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(nums.begin(),nums.end());

        // for(int i: nums){
        //     s.insert(i);
        // }
        // sort(nums.begin(), nums.end());
        vector<int> result;
      
        // check for missing numbers in between
        for(int i = 1; i<=nums.size(); i++){
            if(s.count(i) == 0){
                result.push_back(i);
            }
        }
        return result;
    }
};