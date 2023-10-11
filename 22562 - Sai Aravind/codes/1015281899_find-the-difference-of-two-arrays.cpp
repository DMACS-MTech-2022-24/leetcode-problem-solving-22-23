class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> S1(nums1.begin(),nums1.end()), S2(nums2.begin(),nums2.end());
        vector<vector<int>> res = {{},{}};
        auto i1=S1.begin(),i2=S2.begin();
        while(i1!=S1.end() and i2!=S2.end())
        {
            if(*i1==*i2)
            {
                ++i1;++i2;
            }
            else if(*i1<*i2)
            {
                res[0].push_back((*i1++));
            }
            else
            {
                res[1].push_back(*i2++);
            }
        }
        res[0].insert(res[0].end(),i1,S1.end());
        res[1].insert(res[1].end(),i2,S2.end());
        return res;
    }
};