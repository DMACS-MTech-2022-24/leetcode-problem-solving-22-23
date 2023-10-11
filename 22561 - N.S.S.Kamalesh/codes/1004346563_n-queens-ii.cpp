class Solution {
public:
    int cnt=0;
    void fill(vector<vector<int>>&a,int n,int i,int j){
        for(int k=0;k<n;k++){
            --a[i][k];
            --a[k][j];
        }
        int i1=i+1,j1=j+1;
        for(;i1<n&&j1<n;i1++,j1++)
            --a[i1][j1];
        i1=i-1,j1=j-1;
        for(;i1>=0&&j1>=0;--i1,--j1)
            --a[i1][j1];
        i1=i-1,j1=j+1;
        for(;i1>=0&&j1<n;--i1,++j1)
            --a[i1][j1];
        i1=i+1,j1=j-1;
        for(;i1<n&&j1>=0;++i1,--j1)
            --a[i1][j1];
        a[i][j]+=1;
    }
    void fill1(vector<vector<int>>&a,int n,int i,int j){
        for(int k=0;k<n;k++){
            ++a[i][k];
            ++a[k][j];
        }
        int i1=i+1,j1=j+1;
        for(;i1<n&&j1<n;i1++,j1++)
            ++a[i1][j1];
        i1=i-1,j1=j-1;
        for(;i1>=0&&j1>=0;--i1,--j1)
            ++a[i1][j1];
        i1=i-1,j1=j+1;
        for(;i1>=0&&j1<n;--i1,++j1)
            ++a[i1][j1];
        i1=i+1,j1=j-1;
        for(;i1<n&&j1>=0;++i1,--j1)
            ++a[i1][j1];
        a[i][j]-=1;
    }
    void tmp(vector<vector<int>>&a,int n,int i){
        if(i==n){
            ++cnt;
            return;
        }
        for(int j=0;j<n;j++)
            if(a[i][j]==0){
                fill(a,n,i,j);
                tmp(a,n,i+1);
                fill1(a,n,i,j);
            }
        return;
    }
    int totalNQueens(int n) {
        vector<vector<int>>a(n);
        for(int i=0;i<n;i++)
            a[i]=vector<int>(n);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                a[i][j]=0;
        tmp(a,n,0);
        return cnt;
    }
};