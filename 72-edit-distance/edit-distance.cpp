class Solution {
public:
    int minDistance(string w1, string w2) {
        int m = w1.size(), n = w2.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 0; i <= n; i++)
            dp[0][i] = i;
        for (int i = 0; i <= m; i++)
            dp[i][0] = i;
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (w1[i - 1] == w2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] =
                        1 + min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]});
            }
        }
        return dp[m][n];
    }
};