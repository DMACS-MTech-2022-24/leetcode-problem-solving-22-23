class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(string i: operations){
            if(i == "--X"||i == "X--")
                X -= 1;
            else
                X += 1;
        }
        return X;
    }
};