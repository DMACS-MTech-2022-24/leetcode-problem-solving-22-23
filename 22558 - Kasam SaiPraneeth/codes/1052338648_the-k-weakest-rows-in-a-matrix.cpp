class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // creating min_heap of pair of values(count, row) using priority queue
        priority_queue< pair<int,int> , vector<pair<int,int>>,greater<pair<int, int>> >NoSoldiers;
        // this contains the weekstrow ,which contains less soliders compare to other
        // rows in the given range of k
        vector<int> weekestrow;

        for(int row = 0;row<mat.size(); row++){
            int count = 0;
            // counts no.of soldiers in each row
            for(int col = 0 ; col <mat[row].size() ; col++){
                if(mat[row][col] == 1){
                    count++;
                }
                else
                    break;
            }
            //pushs the pair no.of soldiers and row number
            NoSoldiers.push({count, row});
        }
        // pair can be acessed using first, second
        while(k--){
            weekestrow.push_back(NoSoldiers.top().second);
            NoSoldiers.pop();
        }
        return weekestrow;
    }
};