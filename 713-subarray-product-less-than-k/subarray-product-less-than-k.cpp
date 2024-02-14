class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int n = v.size(), count = 0, pro = 1, j = 0;
        if (k <= 1)
            return 0;
        for (int i = 0; i < n; i++) {
            pro *= v[i];
            while (j < n && pro >= k) {
                pro /= v[j++];
            }
            count += i - j + 1;
        }
        return count;
    }
};