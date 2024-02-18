class Solution {
public:
    bool poss(int ind, vector<int> v) {
        long long n = v.size(), curr = 0, prev = v[0];
        if(v[0]>ind) return false; 
        for (int i = 1; i < n; i++) {
            curr = ind - prev;
            prev = v[i] - curr;
            if (prev > ind)
                return false;
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& v) {
        long long low = 0, high = *max_element(v.begin(), v.end()), mid = 0,
            ans = high;
        while (low < high) {
            mid = (low + high) / 2;
            if (poss(mid, v)) {
                high = mid;
            } else
                low = mid + 1;
        }
        return high;
    }
};