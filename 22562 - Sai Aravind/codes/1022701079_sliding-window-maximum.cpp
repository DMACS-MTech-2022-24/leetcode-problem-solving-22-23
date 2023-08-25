class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        --k;
        vector<int> max_filtrd;
        multiset<int> wnd(nums.begin(),nums.begin()+k);
        for(int i=k;i<nums.size();++i)
        {
            cout<<nums[i]<<" "<<nums[i-k]<<"\n";
            wnd.insert(nums[i]);
            max_filtrd.push_back(*wnd.crbegin());
            wnd.erase(wnd.find(nums[i-k]));
        }
        return max_filtrd;
    }
};