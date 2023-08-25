class Solution {
public:
    bool isPowerOfTwo(int n) {
        // cout<<bitset<32>(n)<<"\n"<<bitset<32>(~n)<<"\n"<<bitset<32>(-n)<<"\n";
        // cout<<bitset<32>((~n)^(-n))<<"\n";
        return n>0 and (((~n)^(-n))&n)==n;
    }
};