class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Check if 0 is missing at the beginning
        if(nums[0]!= 0){
            nums.insert(nums.begin(), 0);
            return 0;
        }
        // Check if n-1 is missing at the ending
        if(nums[n-1]!= n){
            nums.push_back(n);
            return n;
        }

        // check for missing numbers in between
        for(int i = 0; i<n; ){
            if(nums[i+1] == 1+nums[i]){
                i++;
            }
            else{
                nums.insert(nums.begin()+i+1, i+1);
                return i+1;
            }
        }
        return n;
    }
};
