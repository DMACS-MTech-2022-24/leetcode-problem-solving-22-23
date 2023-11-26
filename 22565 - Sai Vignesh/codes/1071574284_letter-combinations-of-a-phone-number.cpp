class Solution {
public:

    string numToChar(char num)
    {
        switch(num)
        {
            case '2': return "abc";
            case '3': return "def";
            case '4': return "ghi";
            case '5': return "jkl";
            case '6': return "mno";
            case '7': return "pqrs";
            case '8': return "tuv";
            case '9': return "wxyz";
            default: return "";
        }
    }

    void helper(string s, vector<string> &ans, string tmp){
        if(!s.length())
        {
            ans.push_back(tmp);
            return;
        }
        string nTos = numToChar(s[0]);
        s.erase(s.begin());
        for(char x : nTos)
            helper(s,ans,tmp+x);

    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits=="") return ans;
        helper(digits,ans,"");
        return ans;
        
    }
};