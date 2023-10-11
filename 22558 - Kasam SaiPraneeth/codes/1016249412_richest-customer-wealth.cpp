class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int maxx = 0;
        for(int i =0; i<acc.size(); i++){
            int sum =0;
            for(int j =0 ; j<acc[i].size(); j++){
                sum +=acc[i][j];
            }
            maxx = max(maxx, sum);
        }
        return maxx;
    }
};