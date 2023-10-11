#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> counter;
        if(s.size() != t.size()){
            return false;
        }
        
        for(char c: s){
            if(counter.find(c) != counter.end()){
                counter[c]++;
            }else{
                counter[c] = 1;
            }
        }
        for(char c: t){
            if(counter.find(c) != counter.end() && counter[c] > 0){
                counter[c]--;
            }else{
                return false;
            }
        }
        return true;
    }
};