class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acronym = "";
        int n = s.size();
        int m = words.size();
        if(n!=m) return false;
        for(int i =0; i<words.size() ; i++){
            acronym.push_back(words[i][0]);
        }
        return acronym == s;
    }
};