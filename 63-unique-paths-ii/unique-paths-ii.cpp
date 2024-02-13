class Solution {
public:
    int solve(int i, int j,vector<vector<int>> &dp,vector<vector<int>>& v){
        if(i<0 or j<0 or v[i][j]==1)  return 0;
        if(i==0 and j==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=solve(i-1,j,dp,v);
        int left=solve(i,j-1,dp,v);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int m=v.size(),n=v[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(m-1,n-1,dp,v);
    }
};