class Solution {
public:
    bool isPalindrome(int x) {
        if(x <0){
            return false;
        }
        else{
            string str = to_string(x);
            int n=str.size(),i,j;
            for (i =0 ,j=n-1 ; i<n/2 ; i++,j--){
                if(str[i]!=str[j])
                    return false;
                }
            }
    return true;
    }
};