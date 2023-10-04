bool compare(const int a,const vector<int> &b){
    return a<b.front();
}
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        auto it=upper_bound(matrix.begin(),matrix.end(),target,compare);
        if(it!=matrix.begin())
        {
            it=prev(it);
            return binary_search(it->begin(),it->end(),target);
        }
        return false;
    }
};