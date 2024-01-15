class Solution {
public:
    long long maximumSubarraySum(vector<int>& v, int k) {
        unordered_map<int ,int> m;
        long long ans = 0, s = 0, j = 0;
        for(int i=0; i<v.size(); i++) {
            m[v[i]]++;
            s += v[i];
            if(k == i - j + 1) {
                if(m.size() == k) ans = max(ans, s);
                s -= v[j];
                m[v[j]]--;
                if(!m[v[j]]) m.erase(v[j]);
                j++;
            }
        }
        return ans;
    }
};