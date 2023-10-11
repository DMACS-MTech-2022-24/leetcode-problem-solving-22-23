class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx=0;
        int altitude=0;
        for(const auto &x:gain)
        {
            altitude+=x;
            if(altitude>mx)
                mx=altitude;
        }
        return mx;
    }
};