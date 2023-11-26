class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target; // create a target vector of type int
        int j;
        for(int i = 0; i<nums.size(); i++){
            j = index[i]; //j contain the index position
            // insert will insert the num[i] and the index position in the target vector
            target.insert(target.begin()+j, nums[i]); 
        }
        return target; //return the target vector
    }
};