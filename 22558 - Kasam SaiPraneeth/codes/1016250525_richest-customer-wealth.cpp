class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int maxx = 0; // intall max is 0
        for(int i =0; i<acc.size(); i++){
            int sum =0; //intial sum is 0 for all the vector in the vectors
            for(int j =0 ; j<acc[i].size(); j++){
                sum +=acc[i][j]; //sum of the elements of the vector<vector>
            }
            maxx = max(maxx, sum); //max of maxx and sum
        }
        return maxx; //return maxx
    }
};