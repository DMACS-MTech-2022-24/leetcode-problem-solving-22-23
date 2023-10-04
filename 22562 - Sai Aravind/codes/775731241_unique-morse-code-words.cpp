class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string conv[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> unq_codes;
        for(const auto &word:words)
        {
            string code;
            for(const auto &ch:word)
            {
                code.append(conv[static_cast<int>(ch-'a')]);
            }
            unq_codes.insert(code);
        }
        return unq_codes.size();
    }
};