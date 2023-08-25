class Solution {
public:
    int romanToInt(string s) {
        int val=0,prev_max=0;
        unordered_map<char,int> sym_val={{'I',1},
                               {'V',5},
                               {'X',10},
                               {'L',50},
                               {'C',100},
                               {'D',500},
                               {'M',1000}};
        for(auto ch=s.rbegin();ch!=s.rend();++ch)
        {
            int eq = sym_val[*ch];
            if(eq<prev_max)
            {
                val-=eq;
            }
            else
            {
                prev_max=eq;
                val+=eq;
            }
        }
        return val;
    }
};