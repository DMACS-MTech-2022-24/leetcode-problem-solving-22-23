// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int tmp=1,tmp1=1;
        while(tmp<n){
            tmp1=tmp+(n-tmp)/2;
            if(isBadVersion(tmp1)==false)
                tmp=tmp1+1;
            else{
                n=tmp1;
            }
        }
        return tmp;
    }
};