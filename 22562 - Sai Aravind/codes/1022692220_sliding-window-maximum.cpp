class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> max_filtrd;
        multiset<int> wnd;
        list<multiset<int>::iterator> slide;
        int i;
        for(i=0;i<k-1;++i)
        {
            slide.push_back(wnd.insert(nums[i]));
        }
        for(;i<nums.size();++i)
        {
            slide.push_back(wnd.insert(nums[i]));
            max_filtrd.push_back(*wnd.crbegin());
            wnd.erase(slide.front());
            slide.pop_front();
        }
        return max_filtrd;
    }
};