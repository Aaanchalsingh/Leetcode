class Solution {
public:
    int minOperations(vector<int>& v, int k) {
        int ans = 0, n = v.size(), count = 0;
        for (int i = 0; i < n; i++)
            ans ^= v[i];
        cout << ans;
        if (k <= 0)
            return __builtin_popcount(ans);
        while (k > 0 || ans > 0) {
            if ((k & 1) != (ans & 1)) {
                count++;
                cout << k << " " << ans << endl;
            }
            k >>= 1;
            ans >>= 1;
        }
        return count;
    }
};