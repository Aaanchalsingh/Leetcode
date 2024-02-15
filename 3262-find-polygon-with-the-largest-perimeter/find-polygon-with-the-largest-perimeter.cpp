class Solution {
public:
    long long largestPerimeter(vector<int>& v) {
        sort(v.begin(), v.end());
        long long current = 0, sum = 0;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] < current)
                sum = current + v[i];
            current += v[i];
        }
        return (sum == 0) ? -1 : sum;
    }
};