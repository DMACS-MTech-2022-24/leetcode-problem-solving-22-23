class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips=0;
        for(int mask=1;mask<1000000001;mask<<=1)
        {
            flips+=int((c&mask)!=((a|b)&mask))+int(((~c)&a&b&mask)!=0);
        }
        return flips;
    }
};