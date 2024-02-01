class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>map;
        for(int a : arr){
            map[a]++;
        }
        
        set<int> st;
        for(auto it:map){
            st.insert(it.second);
        }
        return map.size() == st.size();
    }
};