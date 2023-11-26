class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result; // create a vector type integer
        for(int i =0; i<nums.size(); i++){ // triverse the vector from begin to end
            result.push_back(pow(nums[i],2)); //push the squared val to the result vector
        }
        sort(result.begin(), result.end());//sort the result vector
        return result; //return the result vector
    }
};