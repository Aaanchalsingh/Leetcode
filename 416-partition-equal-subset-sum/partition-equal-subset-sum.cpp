class Solution {
public:
    bool solve(int Target, vector<int>& v, int n, int i,
               vector<vector<int>>& dp) {
        if (Target == 0)
            return true;
        if (i >= n || Target < 0)
            return false;
        if (dp[i][Target] != -1)
            return dp[i][Target];
        bool nottake = solve(Target, v, n, i + 1, dp);
        bool take = false;
        if (Target - v[i] >= 0)
            take = solve(Target - v[i], v, n, i + 1, dp);
        return dp[i][Target] = take || nottake;
    }
    bool canPartition(vector<int>& v) {
        long long sum = accumulate(v.begin(), v.end(), 0), n = v.size();
        if (sum & 1)
            return false;
        long long target = sum / 2;
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return solve(target, v, n, 0, dp);
    }
};