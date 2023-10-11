class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acronym = "";
        for(int i =0; i<words.size() ; i++){
            acronym.push_back(words[i][0]);
        }
        return acronym == s;
    }
};