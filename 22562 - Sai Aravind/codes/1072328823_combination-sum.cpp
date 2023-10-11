class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector S={0};
        vector<int> path={-1};
        int sum=0;
        vector<vector<int>> out;

        while(not S.empty())
        {
            auto &tp=S.back();
            if(sum>=target or tp==candidates.size())
            {
                if(sum==target)
                    out.push_back({path.begin()+1,path.end()});
                sum-=path.back();
                path.pop_back();
                S.pop_back();
            }
            else
            {
                auto nxt=candidates[tp];
                sum+=nxt;
                path.push_back(nxt);
                S.push_back(tp++);
            }
        }
        return out;
    }
};