class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result1 ,result2;
        for(int i: nums){
            if(i%2 == 0){
                result1.push_back(i);
            }
            else
                result2.push_back(i);
        }
        result1.insert(result1.end(), result2.begin(), result2.end());
        return result1;
    }
};