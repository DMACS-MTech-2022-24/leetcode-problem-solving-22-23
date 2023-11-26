class Solution {
public:
    char findTheDifference(string s, string t) {
      // Using Hashmap
      char result;
      unordered_map<char, int>umap;

      for(char c:t){
          umap[c]++;
      }
      for(char c:s){
          umap[c]--;
      }
      for(auto i:umap){
          // if i.second is not equal to zero means, this char appered
          // more the no.of times in t
          if(i.second != 0){
            result = i.first;
          }
      }
       return result; 
    }
};