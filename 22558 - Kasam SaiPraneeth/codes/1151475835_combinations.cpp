class Solution {
public:
    void container(int n, int k, int a, vector<vector<int>>& result,
                   vector<int>& tmp) {
        if (tmp.size() == k) {
            result.push_back(tmp);
        }
        for (int i = a; i <= n; i++) {
            tmp.push_back(i);
            container(n, k, i + 1, result, tmp);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> tmp;

        container(n, k, 1, result, tmp);
        return result;
    }
};