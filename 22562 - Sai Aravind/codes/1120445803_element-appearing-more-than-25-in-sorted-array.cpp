class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n4=(arr.size()+3)/4;
        map<int,int> candidates;
        for(int i=0;i<arr.size();i+=n4)
        {
            if(candidates[arr[i]]++)
            {
                return arr[i];
            }
        }
        for(const auto &[x,y]:candidates)
        {
            int num=(int)(upper_bound(arr.begin(),arr.end(),x)-lower_bound(arr.begin(),arr.end(),x));
            if(num>=n4)
                return x;
        }
        return 0;
    }
};