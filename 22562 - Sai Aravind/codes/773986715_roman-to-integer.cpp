class Solution {
public:
    int romanToInt(string s) {
        int val=0,prev_max=0;
        for(auto ch=s.rbegin();ch!=s.rend();++ch)
        {
            int eq;
            switch(*ch)
            {
                case 'I': eq=1; break;
                case 'V': eq=5; break;
                case 'X': eq=10; break;
                case 'L': eq=50; break;
                case 'C': eq=100; break;
                case 'D': eq=500; break;
                case 'M': eq=1000;
            }
            
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