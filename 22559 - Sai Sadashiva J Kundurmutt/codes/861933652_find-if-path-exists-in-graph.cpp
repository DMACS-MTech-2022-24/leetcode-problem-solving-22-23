class Solution {
public:
    bool dfs(vector<vector<int>>& adj, vector<bool>& visited, int src, int dst)
    {
        visited[src] = true;
        if(src == dst){
            return true;
        }
        for(int u: adj[src]){
            if(!visited[u]){
                bool res = dfs(adj, visited, u, dst);
                if(res){
                    return res;
                }
            }
        }
        return false;
        

    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto& edge: edges){
            int u = edge[0], v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        vector<bool> visited(n, false);
        return dfs(adj, visited, source, destination);
    }
};