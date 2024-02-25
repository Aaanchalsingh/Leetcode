class Solution {
public:
    bool canPartition(vector<int>& v) {
        long long sum = accumulate(v.begin(), v.end(), 0), n = v.size();
        if (sum & 1)
            return false;
        long long target = sum / 2;
        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
        for (int i = 0; i < n; i++)
            dp[i][0] = true;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= target; j++) {
                bool nottake = dp[i - 1][j];
                bool take = false;
                if (j - v[i - 1] >= 0)
                    take = dp[i - 1][j - v[i - 1]];
                dp[i][j] = take || nottake;
            }
        }
        return dp[n][target];
    }
};