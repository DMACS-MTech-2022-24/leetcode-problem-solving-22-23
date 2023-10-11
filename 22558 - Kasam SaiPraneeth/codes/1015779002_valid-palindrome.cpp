class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return 1;
       
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
        }), s.end());
        
        stack<int> sk;
        int i,j=0;
        for(i =0;i<s.length(); i++){
            s[i] = tolower(s[i]);
            sk.push(s[i]);
        }
        while(j<s.length()/2 && !sk.empty()){
            if(s[j] == sk.top()){
                sk.pop();
                j++;
            }
            else
                return 0;
        }
    return 1;
    }
};