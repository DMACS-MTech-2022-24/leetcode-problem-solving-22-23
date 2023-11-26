class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // creating a unordered map
        unordered_map<int, int> umap;

        //traversing through the vector and every new key the count is 1 and added to the
        // umap and if the same key is seen next time incremented by 1
        for(auto i : nums){
           umap[i]++;
        }
       // if the majority element is present it will appears at n/2 index, so set n/=2
        n /= 2;
        // iterate through the umap and when ever value is greather then n,return it
        for(auto a: umap){
            if(a.second > n)
                return a.first;
        }
        // if no majority is found then return 0
        return 0;
    }
};