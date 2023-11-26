class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v(numRows);
        if(numRows==1){
            v[0].push_back(1);
            return v;
        }
        if(numRows==2){
            v[0].push_back(1);
            v[1].push_back(1);
            v[1].push_back(1);
            return v;
        }
        v[0].push_back(1);
        v[1].push_back(1);
        v[1].push_back(1);
        for(int i=2,j;i<numRows;i++){
            v[i].push_back(v[i-1][0]);
            for(j=0;j<v[i-1].size()-1;j++)
                v[i].push_back(v[i-1][j]+v[i-1][j+1]);
            v[i].push_back(v[i-1][j]);
        }
        return v;
    }
};