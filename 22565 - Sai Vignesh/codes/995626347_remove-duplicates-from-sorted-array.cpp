class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 101,k=0;
        auto i=nums.begin();
        while(i!=nums.end())
        {
            if(*i == prev)
                nums.erase(i);
            else
            {
                prev = *i;
                ++i;++k;
            }
        }
        return k;
    }
};