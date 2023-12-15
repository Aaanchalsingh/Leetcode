class Solution {
public:
    int solve(vector<int> nums,int i,vector<int> &dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=solve(nums,i+2,dp)+nums[i];
        int nottake=solve(nums,i+1,dp);
        return dp[i]=max(take,nottake);
    }
    int rob(vector<int>& arr) {
        int n=arr.size();
        vector<int> dp(n+1,-1),dp1(n+1,-1),arr1,arr2;
        if(n==1) return arr[0];
        for(int i=0; i<n; i++){
            if(i!=0) arr1.push_back(arr[i]);
            if(i!=n-1) arr2.push_back(arr[i]);
        }
        long long int ans1 = solve(arr1,0,dp);
        long long int ans2 = solve(arr2,0,dp1);
        return max(ans1,ans2);
    }
};