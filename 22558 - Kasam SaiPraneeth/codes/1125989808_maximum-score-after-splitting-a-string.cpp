class Solution {
public:
    int maxScore(string s) {
// result keep the max of the all the substrings in the given string in each iteration
        int result = 0;
        for(int i = 0; i<s.size()-1; i++){
            // keeps the count of the number of ones and zeros in a given string
            int score =0;
            for(int j = 0 ; j <=i ; j++){
                if(s[j] == '0')
                    score++;
            }

            for(int j = i+1 ; j < s.size() ; j++){
                if(s[j] == '1')
                    score++;
            }
            // keeps the max of the  current score and the previous max
            result = max(result, score);
        }
        return result;
    }
};