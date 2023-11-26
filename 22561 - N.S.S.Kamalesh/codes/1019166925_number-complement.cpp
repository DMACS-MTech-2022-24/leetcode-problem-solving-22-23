class Solution {
public:
    int findComplement(int num) {
        int mask=1,n=floor(log2(num))+1;
        for(int i=1;i<n;i++)
            mask=(mask<<1)|1;
        return mask^num;
    }
};