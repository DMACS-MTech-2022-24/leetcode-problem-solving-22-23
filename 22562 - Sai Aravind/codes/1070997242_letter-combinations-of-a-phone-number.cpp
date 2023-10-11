const vector<vector<string>> num_to_ch={
        {"a","b","c"},
        {"d","e","f"},
        {"g","h","i"},
        {"j","k","l"},
        {"m","n","o"},
        {"p","q","r","s"},
        {"t","u","v"},
        {"w","x","y","z"}
    };
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};
        vector<string> out=num_to_ch[digits[0]-'2'];
        for(int i=1;i<digits.size();++i)
        {
            auto chars=num_to_ch[digits[i]-'2'];
            for(auto &x:out)
            {
                x+=chars[0];
            }
            auto ln=out.size();
            for(int k=1;k<chars.size();++k)
            {
                for(int j=0;j<ln;++j)
                {
                    auto str=out[j];
                    str.back()=chars[k][0];
                    out.push_back(str);
                }
            }
        }
        return out;
    }
};