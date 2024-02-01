class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // push all the elements in then vector into set
        unordered_set<int> st(nums.begin(), nums.end());

        int ans = 0;
        for(int i : nums){
            if(st.find(i-1) == st.end()){
                int currelem = i;
                int count = 1;

                // find if there is next element(i+1) in the set
                while(st.find(currelem+1) != st.end()){
                    currelem++;
                    count++;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};