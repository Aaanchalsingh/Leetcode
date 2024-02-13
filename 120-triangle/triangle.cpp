class Solution {
public:
    int solve(int i, int j, int n, vector<vector<int>>& dp,
              vector<vector<int>>& v) {
        if (i == v.size() - 1)
            return v[i][j];
        if (dp[i][j] != -1)
            return dp[i][j];
        int up = solve(i + 1, j, n, dp, v);
        int left = solve(i + 1, j + 1, n, dp, v);
        return dp[i][j] = min(up, left) + v[i][j];
    }
    int minimumTotal(vector<vector<int>>& v) {
        int n = v.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return solve(0, 0, n, dp, v);
    }
};