class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        int n=v.size(),count=0;vector<int> ans(n,0);
        stack<int> st;
        for(int i = 0; i < n; i++){
            count=0;
            while(!st.empty()&&v[st.top()]<v[i]){
                ans[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};