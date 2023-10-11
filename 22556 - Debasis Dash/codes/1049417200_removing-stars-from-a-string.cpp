class Solution {
public:
    string removeStars(string s) {
        stack<char> charStack;

        for(int i=0 ; i<s.length(); i++){
            if(s[i] != '*')
                charStack.push(s[i]);
            else{
                if(!charStack.empty())
                    charStack.pop();
            }
        }
        string noStarString = ""; 
        while(!charStack.empty()){
            char character = charStack.top();
            noStarString += character ;
            charStack.pop();
        }
        reverse(noStarString.begin(), noStarString.end());
        return noStarString;
    }
};