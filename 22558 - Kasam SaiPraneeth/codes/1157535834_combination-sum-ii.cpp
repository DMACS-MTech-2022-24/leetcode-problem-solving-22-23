class Solution {
public:
    void solution(vector<int>& c, vector<bool>& seen, int target,
                  vector<vector<int>>& ans, int i, vector<int>& tmp, int sum) {
        if (sum == target)
            ans.push_back(tmp);
        if (sum > target)
            return;
        for (int j = i; j < c.size(); j++) {
            if (j > 0 && c[j] == c[j - 1] && !seen[j - 1])
                continue;
            tmp.push_back(c[j]);
            seen[j] = true;
            solution(c, seen, target, ans, j + 1, tmp, sum + c[j]);
            tmp.pop_back();
            seen[j] = false;
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> tmp;
        int sum = 0;
        vector<bool> seen(candidates.size(), false);

        solution(candidates, seen, target, ans, 0, tmp, sum);
        return ans;
    }
};