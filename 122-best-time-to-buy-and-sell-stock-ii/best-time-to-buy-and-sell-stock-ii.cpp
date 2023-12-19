class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                if(buy) dp[i][buy]=max(-v[i]+dp[i+1][0],dp[i+1][1]);
                else dp[i][buy]=max(v[i]+dp[i+1][1],dp[i+1][0]);
            }
        }
        return dp[0][1];
    }
};