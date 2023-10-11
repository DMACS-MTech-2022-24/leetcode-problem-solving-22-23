class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v(rowIndex+1);
        if(rowIndex==0){
            v[0].push_back(1);
            return v[0];
        }
        if(rowIndex==1){
            v[0].push_back(1);
            v[1].push_back(1);
            v[1].push_back(1);
            return v[1];
        }
        v[0].push_back(1);
        v[1].push_back(1);
        v[1].push_back(1);
        for(int i=2,j;i<=rowIndex;i++){
            v[i].push_back(v[i-1][0]);
            for(j=0;j<v[i-1].size()-1;j++)
                v[i].push_back(v[i-1][j]+v[i-1][j+1]);
            v[i].push_back(v[i-1][j]);
        }
        return v[rowIndex];
    }
};