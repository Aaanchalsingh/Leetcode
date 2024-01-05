class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int> dp(n+1,1);
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(v[i]>v[j]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        int m=0;
        for(int i=0;i<n;i++) m=max(m,dp[i]);
        return m;
    }
};