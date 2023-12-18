class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<pair<int,int>> rows(mat.size(),{0,0}),colms(mat[0].size(),{0,0});
        const int m=mat.size(),n=mat[0].size();
        int cnt=0;
        for(int i=0;i<m;++i)
        {
            int s=0;
            int o;
            for(int j=0;j<n;++j)
            {
                s+=mat[i][j];
                colms[j].first+=mat[i][j];
                if(mat[i][j]==1)
                {
                    o=j;
                    colms[j].second=i;
                }
            }
            rows[i]={s,o};
        }
        for(int i=0;i<m;++i)
        {
            const auto &[S,P]=rows[i];
            cnt+=(S==1 and colms[P].first==1 and colms[P].second==i);
        }
        return cnt;
    }
};