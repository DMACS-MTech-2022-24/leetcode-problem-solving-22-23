class Solution {
public:
    string removeStars(string s) {
        string out;
        for(const auto &x:s)
        {
            if(x=='*')
                out.pop_back();
            else
                out.push_back(x);
        }
        return out;
    }
};