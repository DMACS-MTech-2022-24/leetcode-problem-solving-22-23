class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        uint32_t _n = n;
        while(_n){
            ans = ans + (_n % 2 ? 1: 0);
            
            _n = _n >> 1;
        }
        
        return ans;
    }
};