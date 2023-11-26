class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        int n = candies.size();
        vector<bool> result(n);
        for (int i= 0; i<n; i++){
            int elm =  candies[i]+extraCandies;
            if( elm >= max)
                result[i] = true;
            else
                result[i] = false;
        }
        return result;
    }
};