class Solution {
public:
    long long maximumSumOfHeights(vector<int>& v) {
        int n=v.size(),curmin=0;
        long long sum=0,ans=0;
        for(int i=0;i<n;i++){
            curmin=v[i];
            sum=v[i];
            for(int j=i+1;j<n;j++){
                curmin=min(curmin,v[j]);
                sum+=curmin;
            }
            curmin=v[i];
            for(int j=i-1;j>=0;j--){
                curmin=min(curmin,v[j]);
                sum+=curmin;
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};