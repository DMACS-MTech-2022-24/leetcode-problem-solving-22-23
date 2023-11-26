class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size(),begin = 0, end = len-1;
        for(;begin< len/2;){
            if(s[begin]!=s[end]){
                int tmp = s[begin];
                s[begin] = s[end];
                s[end] = tmp;
            }
            begin++;
            end--;
        }
    }
};