class Solution {
public:
    int solve(int i, int prev, int n, vector<int>& v, vector<vector<int>>& dp) {
        if (i >= n) return 0;
        if (prev >= 0 && dp[i][prev] != -1) return dp[i][prev];
        int nottake = solve(i + 1, prev, n, v, dp);
        int take = 0;
        if (prev == -1 || v[prev] < v[i])
            take = 1 + solve(i + 1, i, n, v, dp);
        if (prev >= 0) return dp[i][prev] = max(take, nottake);
        else return max(take, nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(0,-1,nums.size(),nums,dp);
    }
};