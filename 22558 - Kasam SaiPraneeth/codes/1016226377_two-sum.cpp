class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        int i,j;
        for(i = 0; i<nums.size();i++){
            for(j = i+1; j<nums.size(); j++){
                int sum = nums[i]+nums[j];
                if(target == sum){
                    r.insert(r.end(),i);
                    r.insert(r.end(),j);
                    return r;
                    }
            }
        }
        return r;
    }
};