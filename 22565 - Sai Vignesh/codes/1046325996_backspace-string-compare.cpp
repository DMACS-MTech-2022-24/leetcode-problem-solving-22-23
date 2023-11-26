class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "",s2="";
        for(char c:s)
        {
            if(c=='#')
                {if(!s1.empty()) s1.pop_back();}
            else s1.push_back(c);
            // cout<<s1<<" ";
        }
        for(char c:t)
        {
            if(c=='#')
                {if(!s2.empty()) s2.pop_back();}
            else s2.push_back(c);
            // cout<<s2<<" ";
        }
        // cout<<s1<<" "<<s1.length()<<endl<<s2<<" "<<s2.length();
        return s1==s2;
    }
};