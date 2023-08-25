class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx=*max_element(candies.begin(),candies.end());
        vector<bool> ret;
        for(auto const &x:candies)
        {
            ret.push_back(x+extraCandies>=mx);
        }
        return ret;
    }
};