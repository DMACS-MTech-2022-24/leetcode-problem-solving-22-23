class Solution {
public:

    string numToChar(char num)
    {
        // string ret = "";
        switch(num)
        {
            case '2':
                // strcat(ret,"abc");
                return "abc";
            break;
            case '3':
                // strcat(ret,"def");
                return "def";
            break;
            case '4':
                // strcat(ret,"ghi");
                return "ghi";
            break;
            case '5':
                // strcat(ret,"jkl");
                return "jkl";
            break;
            case '6':
                // strcat(ret,"mno");
                return "mno";
            break;
            case '7':
                // strcat(ret,"pqrs");
                return "pqrs";
            break;
            case '8':
                // strcat(ret,"tuv");
                return "tuv";
            break;
            case '9':
                // strcat(ret,"wxyz");
                return "wxyz";
            break;
        }
        return "";
    }

    void helper(string s, vector<string> &ans, string tmp){
        if(s.length()==0)
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