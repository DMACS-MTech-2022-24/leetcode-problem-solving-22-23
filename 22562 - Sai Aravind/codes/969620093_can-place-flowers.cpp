class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        auto sz=flowerbed.size();
        
        // nbd is a sliding window of 3 bits which represent 3 consecutive values in the flowerbed.
        // nums is the number of possible new flowers locations found.
        uint nbd=flowerbed[0],nums=0;
        
        for(int i=0;i<sz;++i)
        {
            // nbd is a sliding window, update it.
            // Shift it to left and or the new value. If i is the last location, then there is nothing after it, so, there is no constraint
            //  from the right. So, put a zero there.
            nbd=((nbd<<1) & 7) | (i+1!=sz && flowerbed[i+1]);
            // If all are zero, then a place if free and can plant a new flower.
            nums+=(nbd==0);
            // If a place is plantable, then the previous statement would have accounted for it. So, remove it from the nbd, that make that
            // place 1.
            nbd|=((nbd==0)<<1);
        }
        return nums>=n;
    }
};