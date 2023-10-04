class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int cnt=0;
        int max_count=0;
        while(i<k)
        {
            switch(s[i++])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    ++cnt;
            }
        }
        if(cnt>max_count)
            max_count=cnt;
        while(i<s.size())
        {
            switch(s[i-k])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    --cnt;
            }
            switch(s[i++])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    ++cnt;
            }
            if(cnt>max_count)
                max_count=cnt;
        }
        return max_count;
    }
};