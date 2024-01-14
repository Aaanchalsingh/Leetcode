class Solution {
public:
    vector<int> finalPrices(vector<int>& v) {
        int n=v.size();vector<int> ans(v.begin(),v.end());
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&st.top()>v[i]) st.pop();
            if(!st.empty()&&i<n) ans[i]-=st.top();
            st.push(v[i]);
        }
        return ans;
    }
};