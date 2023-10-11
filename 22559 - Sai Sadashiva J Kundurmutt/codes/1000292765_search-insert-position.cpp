class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(); 


        int start = 0, end = n - 1;
        while(start <= end){
            int m = (start + end)/2;
            if(nums[m] < target){
                start = m + 1;
            }else if(nums[m] > target){
                end = m - 1;
            }else{
                return m;
            }


        }
        cout << start << " " << end << endl;
        return (end + 1);



    }
};