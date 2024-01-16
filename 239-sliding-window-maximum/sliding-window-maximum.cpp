class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        int n = v.size();vector<int> ans;
        deque<int> dq;
        for (int i = 0; i < k; i++)
        {
            while (!dq.empty() && v[dq.back()] < v[i])
                dq.pop_back();
            dq.push_back(i);
        }
        for (int i = k; i <= n; i++)
        {
            ans.push_back(v[dq.front()]);
            while (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            while (!dq.empty() && i<n && v[dq.back()] < v[i])
                dq.pop_back();
            dq.push_back(i);
        }
        return ans;
    }
};