class Solution {
public:
    vector<int>candidatePath;
    vector<vector<int>>ans;
    void f(int node, vector<vector<int>>& graph)
    {
        bool hasChildren = graph[node].size() > 0;
        candidatePath.push_back(node);
        for(int v: graph[node]){
            f(v, graph);
        }
        int n = graph.size() - 1;
        if(node == n){
            
            ans.push_back(candidatePath);
        }
        candidatePath.pop_back();
    }


    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        candidatePath.clear();
        ans.clear();
        f(0, graph);
        return ans;
    }
};