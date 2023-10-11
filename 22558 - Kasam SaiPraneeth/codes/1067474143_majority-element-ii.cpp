class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        // creating a unordered map
        unordered_map<int, int> umap;

        //traversing through the vector and every new key the count is 1 and added to the
        // umap and if the same key is seen next time incremented by 1
        for(auto i : nums){
           umap[i]++;
        }
       // if the majority element is present it will appears at n/2 index, so set n/=2
        n /= 3;
        // iterate through the umap and when ever value is greather then n,push_back
        // the key into the result vector
        for(auto a: umap){
            if(a.second > n)
                result.push_back(a.first);
        }
        return result;
    }
};