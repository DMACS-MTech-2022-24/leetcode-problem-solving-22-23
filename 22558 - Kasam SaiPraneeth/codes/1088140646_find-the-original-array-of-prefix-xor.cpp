class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> arr;
        int n = pref.size();
        arr.push_back(pref[0]);
        for(int i = 1; i<n ;i++){
            arr.push_back(pref[i-1]^pref[i]);
        }
        return arr;
    }
};