class Solution {
public:
    int minLength(string s) {
        string final = "";
        for(char c : s)
        {
            if(final.empty()) final.push_back(c);
            else{
                if(final.back() == 'A' && c == 'B' ||final.back() == 'C' && c == 'D'  )
                    final.pop_back();
                else final.push_back(c);
            }
        }
        return final.length();
    }
};