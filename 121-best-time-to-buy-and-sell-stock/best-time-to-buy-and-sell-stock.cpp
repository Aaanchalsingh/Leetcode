class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mini=1e9,profit=0,n=v.size(),maxi=0;
        for(int i=0;i<n;i++){
            mini=min(mini,v[i]);
            maxi=max(maxi,v[i]-mini);
        }
        return maxi;
    }
};