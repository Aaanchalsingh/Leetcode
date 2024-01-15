class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        int n=v.size();
        stack<int> st;vector<int> ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&v[st.top()]<=v[i]) st.pop();
            if(!st.empty()&&v[st.top()]>v[i])  ans[i]=st.top()-i;
            st.push(i);
        }
        return ans;
    }
};