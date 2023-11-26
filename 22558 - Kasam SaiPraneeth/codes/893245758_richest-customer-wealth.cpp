class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) { //vector of vectors
        int res =0,total = 0;
        for(int i =0; i< accounts.size() ; i++){
            total = 0; 
            for(int j =0; j< accounts[0].size() ; j++){
                total+=accounts[i][j]; // total amount of the ith person
            }
            res= max(res,total); //costomers with highest wealth
        }
        return res;
    }
};