class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int Walls = cost.size(), n = time.size(), x = 1e9, y = 1e9;
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 1e9));
        dp[0][0]=0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                dp[i][j] = min(dp[i - 1][j],dp[i - 1][max(0, j - time[i - 1] - 1)] + cost[i - 1]);
            }
        }
        return dp[n][n];
    }
};