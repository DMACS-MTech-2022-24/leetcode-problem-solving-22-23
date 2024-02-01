class Solution {
public:
    void solve(int l, int r, int n, string c, vector<string>& ans) {
        if (r < l)
            return;
        if (l == r&& l == 0) {
            ans.push_back(c);
            return;
        }
        if (l != 0) {
            solve(l - 1, r, n, c + "(", ans);
        }
        if ((r != 0)) {
            solve(l, r - 1, n, c + ")", ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string c;
        int left = n, right = n;
        solve(left, right, n, "", ans);
        return ans;
    }
};