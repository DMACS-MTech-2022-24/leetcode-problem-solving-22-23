class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<pair<int, int>>>mp;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                // check if valid
                if(board[i][j] != '.'){
                    if(mp.find(board[i][j]) != mp.end()){
                        for(pair<int, int>& p: mp[board[i][j]]){

                        // check row & col
                            if(p.first == i || p.second == j){
                                return false;
                            }

                        


                        // check 3x3 square

                            if(p.first/ 3 == i/3 && p.second/3 == j/3){
                                return false;
                            }
                        }
                    }
                    // cout << i << " " << j << endl;
                    mp[board[i][j]].push_back(make_pair(i, j));
                    
                }
            }
        }
        return true;
    }
};