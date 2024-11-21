class Solution {
public:
    long long maxProfit(vector<int>& v) {
      int Buy=INT_MIN,Sell=0;
        for(int i=0;i<v.size();i++){
           Buy=max(Buy,Sell-v[i]);
           Sell=max(Sell,Buy+v[i]);
        }
        return Sell;
    }
};