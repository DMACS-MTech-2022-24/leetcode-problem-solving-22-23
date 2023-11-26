class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i = 1; i<=n/2; i++){
            if(n%i == 0){
                string substring = "";
                for(int j = 0; j<n/i; j++){
                    substring +=s.substr(0,i);
                    // cout << substring<<endl;
                }
                if(s == substring){
                    return true;
                }
                // cout<<i<<endl;
            }
        }
        return false;
    }
};