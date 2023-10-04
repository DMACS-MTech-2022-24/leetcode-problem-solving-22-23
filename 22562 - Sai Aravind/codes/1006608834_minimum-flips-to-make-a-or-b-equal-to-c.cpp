const int flip_map[8]={0,1,1,0,1,0,2,0};
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips=0;
        for(;(a|b|c)!=0;a>>=1,b>>=1,c>>=1)
        {
            flips+=flip_map[(((a&1)<<2)|((b&1)<<1)|(c&1))];
        }
        return flips;
    }
};


/*
a b c Flips
0 0 0 0
0 0 1 1
0 1 0 1
0 1 1 0
1 0 0 1
1 0 1 0
1 1 0 2
1 1 1 0
*/
/*
a+b c flips
0   0 0
1   0 1
2   0 2
0   1 1
1   1 0
2   1 0
*/
/*
a b c Flips a+b+c
0 0 0 0     0
0 0 1 1     2
0 1 0 1     2
0 1 1 0     2
1 0 0 1
1 0 1 0
1 1 0 2
1 1 1 0

*/