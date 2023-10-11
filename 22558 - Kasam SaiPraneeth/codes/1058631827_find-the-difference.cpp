class Solution {
public:
    char findTheDifference(string s, string t) {
      // Using Hashmap
      char result;
      unordered_map<char, int>umap;
    // first go through the string t and for ever character in t add 1 every time it appered
      for(char c:t){
          umap[c]++;
      }
      // then subtract 1 ervery time a same character seen in the strings
      for(char c:s){
          umap[c]--;
      }
      for(auto i:umap){
          // if i.second is not equal to zero means, this char appered
          // more then one or a new character in t
          if(i.second != 0){
            result = i.first;
          }
      }
       return result; 
    }
};