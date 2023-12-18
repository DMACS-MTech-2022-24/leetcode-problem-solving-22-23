class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> maxfreq;
        int cnt=0;

        for(char x:chars)
            ++maxfreq[x];
        for(const auto &w:words)
        {
            unordered_map<char,int> av_freq=maxfreq;
            for(const auto &x:w)
                if(av_freq[x]--==0)
                    goto not_done;
                    
            cnt+=w.size();
            not_done:;
        }
        return cnt;
    }
};