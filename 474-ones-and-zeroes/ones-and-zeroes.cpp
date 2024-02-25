#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    int countone(const std::string& s) {
        int count = 0;
        for (char c : s) {
            if (c == '1')
                count++;
        }
        return count;
    }

    int countzero(const std::string& s) {
        int count = 0;
        for (char c : s) {
            if (c == '0')
                count++;
        }
        return count;
    }

    int solve(const std::vector<std::string>& v, int i, int m, int n, std::vector<std::vector<std::vector<int>>>& dp) {
        if (i >= v.size())
            return 0;
        if (dp[i][m][n] != -1)
            return dp[i][m][n];

        int nottake = solve(v, i + 1, m, n, dp);
        int cur = countzero(v[i]); // Corrected function call
        int curz = countone(v[i]); // Corrected function call
        int take = 0;
        if (cur <= m && curz <= n)
            take = 1 + solve(v, i + 1, m - cur, n - curz, dp);
        return dp[i][m][n] = std::max(take, nottake);
    }

    int findMaxForm(std::vector<std::string>& v, int m, int n) {
        int size = v.size();
        std::vector<std::vector<std::vector<int>>> dp(size, std::vector<std::vector<int>>(m + 1, std::vector<int>(n + 1, -1)));
        return solve(v, 0, m, n, dp);
    }
};
