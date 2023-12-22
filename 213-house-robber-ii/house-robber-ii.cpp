class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();vector<int> dp(n+1,0),ans,ans2;
        if(n==1) return v[0];
        for(int i=0;i<n;i++){
            if(i!=0) ans.push_back(v[i]);
            if(i!=n-1) ans2.push_back(v[i]);
        }
        for(int i=2;i<=n;i++) dp[i]=max(dp[i-1],ans[i-2]+dp[i-2]);
        int result=dp[n];

        for(int i=0;i<n-1;i++) ans2.push_back(v[i]);

        fill(dp.begin(),dp.end(),0);
        for(int i=2;i<=n;i++) dp[i]=max(dp[i-1],ans2[i-2]+dp[i-2]);

        result=max(result,dp[n]);
        return result;
    }
};