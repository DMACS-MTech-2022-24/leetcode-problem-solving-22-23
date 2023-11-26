class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result{nums};//put the given nums into new vector 
        int n = nums.size();
        // then add the same elements at the end using pushback
        for(int i =0; i<n; i++){
           result.push_back(nums[i]);
        }
        return result;
    }
};