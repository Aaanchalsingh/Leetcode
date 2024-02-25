class Solution {
public:
    int solve(int i, vector<int> v, vector<int> cost, vector<int>& dp) {
        if (i > v[v.size() - 1])
            return 0;
        if (dp[i] != -1)
            return dp[i];
        if (find(v.begin(), v.end(), i) == v.end())
            return solve(i + 1, v, cost,dp);

        int one = cost[0] + solve(i + 1, v, cost, dp);
        int week = cost[1] + solve(i + 7, v, cost, dp);
        int month = cost[2] + solve(i + 30, v, cost, dp);
        return dp[i] = min({one, week, month});
    }
    int mincostTickets(vector<int>& v, vector<int>& costs) {
        int n = *max_element(v.begin(), v.end());
        vector<int> dp(n + 1, -1);
        return solve(0, v, costs, dp);
    }
};