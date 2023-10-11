class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        sort(words.begin(),words.end());
        vector<string>v;
        map<string,int>m;
        multimap<int,string,greater<int>>mm;
        for(int i=0;i<words.size();i++)
            ++m[words[i]];
        for(auto& i:m){
            mm.insert({i.second,i.first});
        }
        for(auto i:mm){
            v.push_back(i.second);
            --k;
            if(k==0)
                return v;
        }
        return v;
    }
};