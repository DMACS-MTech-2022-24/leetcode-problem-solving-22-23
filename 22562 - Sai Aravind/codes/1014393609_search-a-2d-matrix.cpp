bool compare(const int a,const vector<int> &b){
    return a<b.front();
}
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,r=matrix.size()*matrix.front().size()-1;
        while(l<=r)
        {
            auto m=l+(r-l)/2;
            auto mi=m/matrix.front().size(),mj=m%matrix.front().size();
            cout<<mi<<" "<<mj;
            if(matrix[mi][mj]==target)
                return true;
            else if(matrix[mi][mj]<target)
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        return false;
    }
};