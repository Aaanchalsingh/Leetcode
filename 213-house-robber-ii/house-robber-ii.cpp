class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();vector<int> dp(n+1,0),ans;
        if(n==1) return v[0];
        for(int i=0;i<n-1;i++) ans.push_back(v[i]);
        for(int i=2;i<=n;i++) dp[i]=max(dp[i-1],ans[i-2]+dp[i-2]);
        int result=dp[n];
        ans.push_back(v[n-1]);
        ans.erase(ans.begin());
        fill(dp.begin(),dp.end(),0);
        for(int i=2;i<=n;i++) dp[i]=max(dp[i-1],ans[i-2]+dp[i-2]);

        result=max(result,dp[n]);
        return result;
    }
};