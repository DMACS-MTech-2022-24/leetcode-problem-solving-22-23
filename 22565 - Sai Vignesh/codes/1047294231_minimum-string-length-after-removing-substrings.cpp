class Solution {
public:
    int minLength(string s) {
        string final = "";
        final.push_back('#');
        for(char c : s)
        {
            if(final.back() == 'A' && c == 'B' || final.back() == 'C' && c == 'D'  )
                final.pop_back();
            else final.push_back(c);
        }
        return final.length()-1;
    }
};