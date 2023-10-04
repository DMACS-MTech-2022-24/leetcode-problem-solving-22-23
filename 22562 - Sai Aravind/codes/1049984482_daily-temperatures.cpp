class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        multimap<int,int,greater<int>> S={{temperatures[0],0}};
        for(int i=1;i<temperatures.size();++i)
        {
            auto it=S.upper_bound(temperatures[i]);
            for(auto ii=it;ii!=S.end();++ii)
            {
                temperatures[ii->second]=i-ii->second;
            }
            S.erase(it,S.end());
            S.insert({temperatures[i],i});
        }
        for(auto const& [key, val] : S)
        {
            temperatures[val]=0;
        }
        return temperatures;
    }
};