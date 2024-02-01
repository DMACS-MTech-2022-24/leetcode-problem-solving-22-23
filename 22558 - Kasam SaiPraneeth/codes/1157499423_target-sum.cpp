class Solution {
public:
    int solution(vector<int>& n, int target,int sum, int i) {
        if(i == n.size())// checking the base condition
            return sum == target ? 1:0; //checking the sum is equal to the target then 1 else 0
        int onadd = solution(n, target, sum + n[i], i+1);
        int onsub = solution(n, target, sum - n[i], i+1);
        // returning the total combination of the given vector to get target value 
        return onadd + onsub;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0, i = 0;
        //return the total count
        return solution(nums, target, sum, i);
    }
};