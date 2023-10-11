class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> vals;   
        for(const auto &x:arr)
            ++mp[x];
        for(const auto &ent:mp)
        {
            if(not vals.insert(ent.second).second)
                return false;
        }
        return true;
    }
};