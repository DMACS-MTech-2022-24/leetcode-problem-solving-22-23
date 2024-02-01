class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> result;
        for (int i : nums) {
            map[i]++;
        }
        for (auto it : map) {
            if (it.second > 1)
                result.push_back(it.first);
        }
        return result;
    }
};