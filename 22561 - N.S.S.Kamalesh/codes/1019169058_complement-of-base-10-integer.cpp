class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0) return 1;
        int mask=1,n=floor(log2(num))+1;
        for(int i=1;i<n;i++)
            mask=(mask<<1)|1;
        return mask^num;
    }
};