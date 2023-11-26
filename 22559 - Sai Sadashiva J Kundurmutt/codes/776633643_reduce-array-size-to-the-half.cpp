#define max_limit 100001
#include<algorithm>
#include<vector>


class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int>counter(max_limit, 0);
        for(auto& el: arr){
            counter[el]++;
        }
        sort(counter.begin(), counter.end());
        int removed = 0;
        int n = arr.size();
        int ans = 0;
        int idx = max_limit - 1;
        while(idx >= 0 && counter[idx] > 0 && removed < (n/2)){
            cout <<counter[idx] << " " << idx << endl;
            removed += counter[idx--];
            ans++;
        }
        return ans;
    }
};