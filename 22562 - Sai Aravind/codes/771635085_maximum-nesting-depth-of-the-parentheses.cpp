class Solution {
public:
    int maxDepth(string s) {
        int max_depth=0,cur_depth=0;
        for(const char& c:s)
        {
            if(c=='(')
                ++cur_depth;
            else if(c==')')
            {
                if(max_depth<cur_depth)
                    max_depth=cur_depth;
                --cur_depth;
            }
        }
        return max_depth;
    }
};