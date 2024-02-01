class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> up;
        for(int i =0; i<words.size() ; i++){
            for(int  j =0 ; j<words[i].size() ;j++){
                up[words[i][j]]++;
            }
        }

       int n = words.size();
        for (auto a : up) {
            if (a.second % n != 0) {
                return false;
            }
        }
        return true;
    }
};