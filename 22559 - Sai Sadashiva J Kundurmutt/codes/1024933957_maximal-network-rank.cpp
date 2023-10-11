class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>>adj(n, vector<int>(n, 0));
        vector<int>degrees(n, 0);
        for(auto& edge: roads){
            adj[edge[0]][edge[1]] = 1;
            adj[edge[1]][edge[0]] = 1;

            degrees[edge[0]]++;
            degrees[edge[1]]++;
        }


        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int tmp = degrees[i] + degrees[j];
                if(adj[i][j]){
                    tmp--;
                }

                ans = max(ans, tmp);
            }
        }

        return ans;


    }
};