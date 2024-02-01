class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int smallest = INT_MAX;
        int secondsmallest = INT_MAX;
        int biggest = 0;
        int secondbiggest = 0;

        for(int i = 0; i<n ; i++){
            if(nums[i]>biggest){
                secondbiggest = biggest;
                biggest = nums[i];
            }
            else{
                secondbiggest = max(nums[i], secondbiggest);
            }

            if(nums[i]<smallest){
                secondsmallest = smallest;
                smallest = nums[i];
            }
            else{
                secondsmallest = min(nums[i], secondsmallest);
            }
        }

        return(biggest*secondbiggest - smallest*secondsmallest);

    }
};