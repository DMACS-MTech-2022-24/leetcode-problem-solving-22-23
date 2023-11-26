class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int result;
    int top = 0,down = matrix.size()-1;

    while(top<down-1){
        result = (top+down)/2;
        if(matrix[result][0]==target)
            return true;
        if(target<matrix[result][0])
            down = result-1;
        else top = result;
    }
    if(matrix[down][0]==target)
        return true;
    if(matrix[down][0]>target)
        return binary_search(matrix[top].begin(),matrix[top].end(),target);
    else return binary_search(matrix[down].begin(),matrix[down].end(),target);

    }
};