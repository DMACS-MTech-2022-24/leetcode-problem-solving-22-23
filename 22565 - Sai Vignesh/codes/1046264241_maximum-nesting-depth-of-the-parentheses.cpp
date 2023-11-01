class Solution {
public:
    int maxDepth(string s) {
        int max=0,tmp=0;
        for(char c : s)
        {
            if(c == '('){
             ++tmp;
             if(tmp>max) max=tmp;

            }
            else if(c == ')')
                --tmp;
        }
        return max;
    }
};