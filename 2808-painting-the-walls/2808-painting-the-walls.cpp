class Solution {
public:
int solve(vector<int>& cost, vector<int>& time,int cur,int rem,vector<vector<int>> &dp){
        
        if(rem<=0) return 0;
        if(cur>=cost.size()) return 1000000000;
        if(dp[cur][rem]!=-1) return dp[cur][rem];
        int take = cost[cur]+solve(cost,time,cur+1,rem-time[cur]-1,dp);
        int nottake = solve(cost,time,cur+1,rem,dp);
        return dp[cur][rem]=min(take,nottake);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        vector<vector<int>> dp(cost.size()+1,vector<int>(time.size()+1,-1));
        return solve(cost,time,0,time.size(),dp);
    }
};