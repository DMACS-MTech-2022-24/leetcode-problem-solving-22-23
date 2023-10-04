class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> req;
        int count=0;
        for(const auto& x:nums)
        {
            if(req[x]>0)
            {
                ++count;
                --req[x];
            }
            else
            {
                ++req[k-x];
            }
        }
        return count;
    }
};