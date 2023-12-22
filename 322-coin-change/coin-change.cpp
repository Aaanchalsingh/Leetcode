class Solution {
public:
    int coinChange(vector<int>& v, int amount) {
        int n=v.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,0));
        for(int i=0; i<=amount; i++){
            if(i%v[0] == 0)  
                dp[0][i] = i/v[0];
            else dp[0][i] = 1e9;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                int nottake=dp[i-1][j];
                int take=1e9;
                if(j-v[i]>=0)take=dp[i][j-v[i]]+1;
                dp[i][j]=min(take,nottake);
            } 
        }
        int k=dp[n-1][amount];
        if(k==1e9) return -1;
        return k;
    }
};