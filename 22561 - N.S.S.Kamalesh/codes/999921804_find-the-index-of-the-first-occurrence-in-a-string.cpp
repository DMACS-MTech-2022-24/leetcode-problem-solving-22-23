class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t tmp=haystack.find(needle);
        if(tmp!=string::npos) return tmp;
        return -1;
    }
};