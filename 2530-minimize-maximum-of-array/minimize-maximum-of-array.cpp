class Solution {
public:
    int minimizeArrayValue(vector<int>& v) {
        long long n = v.size(), sum =0, ans = 0, lcm = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            lcm = (sum + i) / (i + 1);
            ans = max(ans, lcm);
            cout<<ans<<endl;
        }
        return ans;
    }
};