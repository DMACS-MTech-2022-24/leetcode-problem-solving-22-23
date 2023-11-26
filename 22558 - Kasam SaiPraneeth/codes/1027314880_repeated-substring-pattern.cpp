class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        //Idea of this problem is that ,1st find the size of the string, then compare the
        // the multipules of the length, so it is required to go till the n/2, because 
        // if the given is reapeating substring then its half the string is enough to 
        // find the 2nd half(reapeated subpattern)
        // order o(n)
        for(int i = 1; i<=n/2; i++){ // this loop go till the n/2
        // maximun it goes into this is squareofn
            if(n%i == 0){ //if i is factor of the n, then only it goes in
                string substring = ""; // creats a empty string
                //loop is used for creating the substring of n/i length
                for(int j = 0; j<n/i; j++){
                    substring +=s.substr(0,i); //concatenate the substring j<n/i times
                }
                if(s == substring){ // if substring and s equal return yes
                    return true;
                }
            }
        }
        // this process goes untill the n/2 and if the created substring is not equal to
        // the given string 
        return false; // returns fasle
    }
};