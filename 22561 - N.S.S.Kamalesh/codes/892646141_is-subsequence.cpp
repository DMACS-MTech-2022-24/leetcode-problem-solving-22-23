class Solution {
public:
    bool isSubsequence(string s, string t) {
        size_t i=0;
        for(char c:s){
            i=t.find(c,i);
            if(i==string::npos)
                return false;
            ++i;
        }
        return true;
    }
};