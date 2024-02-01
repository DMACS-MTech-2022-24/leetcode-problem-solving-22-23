class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i : nums){
            map[i]++;
        }

        for(auto it: map){
            if(it.second > 1)
                return it.first;
        }
        return -1;
    }
};