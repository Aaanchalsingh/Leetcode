class Solution {
public:
    int pivotIndex(vector<int>& v) {
        int n = v.size(), sum = 0, left = 0;
        for(auto x: v) sum+=x;
        for (int i = 0; i < n; i++)
        {
            left += v[i];
            if (sum - left == left-v[i]) return i;
        }
        return -1;
    }
};