class Solution {
public:
    string removeDuplicates(string s) {
        string final = "";
        for(char c:s)
        {
            if(final.empty()) final.push_back(c);
            else{
                if(final.back() == c) final.pop_back();
                else final.push_back(c);
            }
        }
        return final;
    }
};