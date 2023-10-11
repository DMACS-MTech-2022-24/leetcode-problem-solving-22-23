class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        auto cmp=greater<int>();
        make_heap(nums.begin(),nums.begin()+k,cmp);
        auto K=nums.begin()+k;
        for(auto it=K;it!=nums.end();++it)
        {
            *K=*it;
            push_heap(nums.begin(),K+1,cmp);
            pop_heap(nums.begin(),K+1,cmp);
        }
        sort_heap(nums.begin(),K,cmp);
        return nums[k-1];
    }
};