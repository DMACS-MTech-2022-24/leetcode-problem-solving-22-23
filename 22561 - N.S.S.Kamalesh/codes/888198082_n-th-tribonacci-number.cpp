class Solution {
public:
    int tn[38];
    void dp(){
        tn[0]=0;tn[1]=1;tn[2]=1;
        for(int i=3;i<38;i++)
            tn[i]=tn[i-1]+tn[i-2]+tn[i-3];
    }
    int tribonacci(int n) {
        dp();
        return tn[n];
    }
};