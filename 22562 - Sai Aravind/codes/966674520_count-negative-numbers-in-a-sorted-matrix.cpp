class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int idx=0;
        for(auto row=grid.rbegin();row!=grid.rend();++row)
        {
            auto idx_it=upper_bound(row->begin()+idx,row->end(),0,greater<int>());
            count+=row->end()-idx_it;
            idx=idx_it-row->begin();
        }
        return count;
    }
};