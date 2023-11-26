class Solution {
public:
    string reverseWords(string s) {
        //The extraction operator will read until whitespace is 
        //reached or until the stream fails.
        istringstream stream(s);
        string word, result;
        // gets the individual word in the string and reverse the word.
        // then appends the word to result string and add a space after it
        while(stream >> word){
            reverse(word.begin(), word.end());
            result += word + " ";
        }
        // removes the trailing space at the end
        if(!result.empty()){
            result.pop_back();
        }
        return result;
    }
};