class Solution {
public:
    int maxProfit(vector<int>&v) {
        int n=v.size(),buy=1e9,profit=0;
        for(int i=0;i<n;i++){
            buy=min(buy,v[i]);
            profit=max(profit,v[i]-buy);
        }
        return profit;
        
    }
};