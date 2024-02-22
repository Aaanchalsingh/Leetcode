class Solution {
public:
    bool isposs(int n, int k, vector<int>& v, int mid) {
        int sum = 0, days = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (sum > mid) {
                k--;
                sum = v[i];
            }
        }
        return k>0;
    }
    int shipWithinDays(vector<int>& v, int days) {
        int low = *max_element(v.begin(), v.end()), mid = 0, ans = -1;
        int high = accumulate(v.begin(), v.end(), 0);
        while (low <= high) {
            mid = (low + high) / 2;
            if (isposs(v.size(), days, v, mid)) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};