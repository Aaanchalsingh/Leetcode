class Solution {
public:
    int solve(string s,int i,int n,vector<int> &dp){
        if(i>=n) return 1;
        if(s[i]=='0') return 0;
        if(i==n-1) return 1;
        if(dp[i]!=-1) return dp[i];
        if(s[i]=='1'||(s[i]=='2'&&s[i+1]>='0'&&s[i+1]<='6'))
          return dp[i]=solve(s,i+1,n,dp)+solve(s,i+2,n,dp);
        else return dp[i]=solve(s,i+1,n,dp);
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n+1,-1);
        return solve(s,0,n,dp);
    }
};