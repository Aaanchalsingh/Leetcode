class Solution {
public:
    vector<int> searchRange(vector<int>& v, int tar) {
        int n = v.size(), low = 0, high = n - 1, mid = 0, first = -1, last = -1;
        while (low <= high) {
            mid = (low + high) / 2;
            if (v[mid] == tar) {
                first = mid;
                high = mid - 1;
            } else if (v[mid] > tar)
                high = mid - 1;
            else
                low = mid + 1;
        }
        low = 0;
        high = n - 1;
        mid = 0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (v[mid] == tar) {
                last = mid;
                low = mid + 1;
            } else if (v[mid] > tar)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return {first, last};
    }
};