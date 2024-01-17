class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& v) {
        int n = v.size(), count = 0;
        stack<int> st;
        vector<int> ans(n, 0);
        for (int i = n-1; i >=0; i--) {
            count = 0;
            while (!st.empty() && st.top() <= v[i]) {
                st.pop();
                count++;
            }
            if (!st.empty())
                ans[i] = count + 1;
            else
                ans[i] = count;
            st.push(v[i]);
        }
        return ans;
    }
};