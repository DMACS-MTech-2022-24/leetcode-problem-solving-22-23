class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0){
            return vector<int>(1,1);
        }
        if(rowIndex==1){
            return vector<int>(2,1);
        }
        vector<int>v(rowIndex+1);
        v[0]=1;v[1]=1;
        int tmp1;
        for(int i=2,j;i<=rowIndex;i++){
            for(j=0;j<2*(i-1);){
                tmp1=v[j]+v[j+1];
                v.insert(v.begin()+j+1,tmp1);
                j+=2;
                if(j>=4) {v.erase(v.begin()+j-2);--j;}
            }
        }
        v.resize(rowIndex+1);
        return v;
    }
};