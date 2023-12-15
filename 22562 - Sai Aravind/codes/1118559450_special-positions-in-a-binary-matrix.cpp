class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        const int m=mat.size(),n=mat[0].size();
        vector<pair<int,int>> rows(m,{0,0}),colms(n,{0,0});
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
            rows[i].first=s;
            rows[i].second=o;
        }
        for(int i=0;i<m;++i)
        {
            const auto &[S,P]=rows[i];
            const auto &[Sc,Pc]=colms[P];
            cnt+=(S==1 and Sc==1 and Pc==i);
        }
        return cnt;
    }
};