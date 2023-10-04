class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        long cur_avg=0,max_avg;
        while(i<k)
        {
            cur_avg+=nums[i++];
        }
        max_avg=cur_avg;
        for(;i<nums.size();++i)
        {
            cur_avg+=(nums[i]-nums[i-k]);
            if(cur_avg>max_avg)
                max_avg=cur_avg;
        }
        return max_avg/static_cast<double>(k);
        // return max_avg/k;
    }
};