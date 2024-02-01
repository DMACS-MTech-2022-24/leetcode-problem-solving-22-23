class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "";
        string str2 = "";
        int l1 = word1.size(), l2 = word2.size();
        for(int i = 0; i<l1 ; i++){
            str1 += word1[i];
        }
        for(int j = 0; j<l2 ; j++){
            str2 += word2[j];
        }

        return str1 == str2;
    }
};