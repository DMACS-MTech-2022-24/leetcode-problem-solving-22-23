class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> k_avgs(nums.size(),-1);
        int n=2*k+1;

        if(n>nums.size())
        {
            return k_avgs;
        }
        if(k==0)
        {
            return nums;
        }
        long wind=0;
        for(vector<int>::const_iterator it=nums.begin();it!=nums.begin()+2*k;++it)
            wind+=*it;
        
        for(int i=k;i<nums.size()-k;++i)
        {
            wind+=nums[i+k];
            k_avgs[i]=wind/n;
            wind -=nums[i-k];
        }
        return k_avgs;
    }
};