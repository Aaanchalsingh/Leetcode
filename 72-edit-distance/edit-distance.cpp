class Solution {
public:
    int solve(string x, string y, int m, int n, vector<vector<int>>& dp) {
        if (m < 0 and n < 0)
            return 0;
        if (m <= 0 or n <= 0) {
            return abs(m - n);
        }
        if (dp[m][n] != -1)
            return dp[m][n];
        if (x[m - 1] == y[n - 1])
            return dp[m][n] = solve(x, y, m - 1, n - 1, dp);
        return dp[m][n] = min({1 + solve(x, y, m - 1, n, dp),
                               1 + solve(x, y, m, n - 1, dp),
                               1 + solve(x, y, m - 1, n - 1, dp)});
    }
    int minDistance(string w1, string w2) {
        int m = w1.size();
        int n = w2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return solve(w1, w2, w1.size(), w2.size(), dp);
    }
};