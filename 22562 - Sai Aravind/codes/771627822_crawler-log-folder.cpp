class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth=0;
        for(const auto op:logs)
        {
            if(op[1]=='.')
            {
                depth = depth==0?0:depth-1;
            }
            else if(op[0]!='.')
            {
                ++depth;
            }
        }
        return depth;
    }
};