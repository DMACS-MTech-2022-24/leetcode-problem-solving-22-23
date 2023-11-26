class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size(),begin = 0, end = len-1;
        for(;begin< len/2;){
            swap(s[begin++],s[end--]);
        }
    }
};