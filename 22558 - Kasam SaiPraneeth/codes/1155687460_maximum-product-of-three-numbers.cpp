class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fMax = INT_MIN;
        int sMax = fMax;
        int tMax = sMax;

        int fmin = INT_MAX;
        int smin = fmin;

        for(int it : nums){
            // calculating the first, second, third maximum element in the given element
            if(fMax <= it){
                tMax = sMax;
                sMax = fMax;
                fMax = it;
            }
            else if(sMax <= it){
                tMax = sMax;
                sMax = it;
            }
            else if(tMax <= it){
                tMax = it;
            }

            // cacalculating the first, second, minimum element in the given element
            if(fmin >= it){
                smin = fmin;
                fmin = it;
            }
            else if(smin >= it){
                smin = it;
            }
        }
        int ans = max(fMax*sMax*tMax, fmin*smin*fMax);
        return ans;
    }
};