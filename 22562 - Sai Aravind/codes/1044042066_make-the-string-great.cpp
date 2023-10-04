class Solution {
public:
    string makeGood(string s) {
        string out;
        for(const auto &x:s)
        {
            if(not out.empty() and abs(x-out.back())==32)
            {
                out.pop_back();
            }
            else
            {
                out.push_back(x);
            }
        }
        return out;
    }
};