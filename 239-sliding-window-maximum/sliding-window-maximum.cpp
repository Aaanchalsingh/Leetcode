class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        int n = v.size();
        vector<int> ans;
        multiset<int> st;
        for (int i = 0; i < k; i++) {
            st.insert(v[i]);
        }
        for (int i = k; i <= n; i++) {
            ans.push_back(*(st.crbegin()));
            if(i-k<n)st.erase(st.find(v[i - k]));
            if(i<n)st.insert(v[i]);
        }
        return ans;
    }
};