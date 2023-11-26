class Solution {
public:
    bool isPalindrome(string s) {
        // if given string is empty returns true 
        if(s.empty()) return 1;
        
        //remove: moves all the non alphanumaric to the end of the string
        // erase deletes all the non alphanumaric at the end
        s.erase(remove_if(s.begin(), s.end(), [](char c) { 
            return !isalnum(c);
        }), s.end());
        
        stack<int> sk; //stack is created
        int i,j=0;
        for(i =0;i<s.length(); i++){
            s[i] = tolower(s[i]); //converting the given string one by one tolower alphabets
            sk.push(s[i]);// pushing one character at a time
        }
        //  this is to check it is palindrome so go till half of the string
        while(j<s.length()/2 && !sk.empty()){
            if(s[j] == sk.top()){//checking char in the string and top of the stack are same
                sk.pop(); //if yes pop
                j++; //increment the j++
            }
            else
                return 0; // are else not matching so return 0
        }
    return 1; //else return true
    }
};