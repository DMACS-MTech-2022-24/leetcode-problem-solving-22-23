class Solution {
public:
    string makeGood(string s) {
        string out;
        for(const auto &x:s)
        {
            if(out.empty() or abs(x-out.back())!=32)
            {
                out.push_back(x);
            }
            else
            {
                out.pop_back();
            }
        }
        return out;
    }
};