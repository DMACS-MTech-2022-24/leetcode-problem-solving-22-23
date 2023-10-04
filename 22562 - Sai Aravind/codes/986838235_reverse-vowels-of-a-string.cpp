class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        unordered_set<char> vowels({'a','e','i','o','u','A','E','I','O','U'});
        while(i<j)
        {
            if(vowels.find(s[i])==vowels.end())
            {
                ++i;
            }
            else if(vowels.find(s[j])==vowels.end())
            {
                --j;
            }
            else
            {
                auto tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
                ++i;
                --j;
            }
        }
        return s;
    }
};