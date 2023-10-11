class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end()); // sort the string s
        sort(t.begin(), t.end()); // sort the string t
        if(s.compare(t) !=0 ) //if compare doesn't return 0
            return 0; //means strings are not same
        return 1; //if equals to 0, means same
    }
};