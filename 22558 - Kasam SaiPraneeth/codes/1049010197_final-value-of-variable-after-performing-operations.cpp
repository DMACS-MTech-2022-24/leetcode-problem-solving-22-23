class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(string i: operations){
            if(i == "--X"||i == "X--")
                X --;
            else
                X ++;
        }
        return X;
    }
};