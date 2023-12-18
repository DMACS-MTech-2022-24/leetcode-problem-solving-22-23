class Solution {
public:
    int hammingDistance(int x, int y) {
        int hd=0;
        x^=y;
        while(x>0)
        {
            hd+=x&1;
            x>>=1;
        }
        return hd;
    }
};