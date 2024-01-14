class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        int n=v.size();stack<int> st;vector<int> ans(n,-1);
        st.push(v[0]);
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty()&&st.top()<=v[i%n]) st.pop();
            if(i<n&&!st.empty()) ans[i]=st.top();
            st.push(v[i%n]);
        }
        return ans;
    }
};