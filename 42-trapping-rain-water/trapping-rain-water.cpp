class Solution {
public:
    int trap(vector<int>& v) {
        int n = v.size(), ans = 0;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && v[st.top()] <= v[i]) {
                int cur = st.top();
                st.pop();
                if (!st.empty()) {
                    int height = min(v[st.top()], v[i]) - v[cur];
                    int width = i - (st.top()+ 1);
                    ans += height * width;
                }
            }
            st.push(i);
        }
        return ans;
    }
};