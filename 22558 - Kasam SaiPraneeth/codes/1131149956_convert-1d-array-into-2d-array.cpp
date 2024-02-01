class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        vector<int> a;
        if(original.size()!=m*n) return {};
        int i =0,k=n;
        while(m > 0){
            while(i<n){
                a.push_back(original[i]);
                i++;
                }
            ans.push_back(a);
            a.clear();
            n+=k;
            m--;
            }
        return ans;
    }
};