class Solution {
public:
    int solve(vector<int>& v,int buy,int i,int n,vector<vector<int>> &dp){
        if(i>=n) return 0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy){
            dp[i][buy]=max(-v[i]+solve(v,0,i+1,n,dp),solve(v,1,i+1,n,dp));
        }
        else{
            dp[i][buy]=max(v[i]+solve(v,1,i+1,n,dp),solve(v,0,i+1,n,dp));
        }
        return dp[i][buy];
    }
    int maxProfit(vector<int>& v) {
        vector<vector<int>> dp(v.size()+1,vector<int>(2,-1));
        return solve(v,1,0,v.size(),dp);
    }
};