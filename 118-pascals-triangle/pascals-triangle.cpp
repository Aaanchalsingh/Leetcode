class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> result;vector<int> v;
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 1));
        result.push_back({1});
        if(n==1) return result;

        for (int i = 1; i < n; i++) {
            v.push_back(1);
            for (int j = 1; j < i; j++) {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                v.push_back(dp[i][j]);
            }
            v.push_back(1);
            result.push_back(v);
            v.clear();
        }
        return result;
    }
};