class Solution {
public:
    string makeGood(string s) {
        string final = "";
        for(char c : s)
        {
            if(final.empty()) final.push_back(c);
            else
                if(int(abs(final.back() - c)) == 32)
                    final.pop_back();
                else final.push_back(c);
        }
        return final;
    }
};