class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1);

        result[0] = 0;
        if(n == 0)
            return result;
        result[1] = 1;

        int i = 2;
        while(i<=n){
            if(i%2 == 0){
                result[i] = result[i/2];
            }
            else{
                result[i] = result[i-1]+result[1];
            }
            i++;
        }
        return result;
    }
};