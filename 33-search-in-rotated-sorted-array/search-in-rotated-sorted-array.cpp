class Solution {
public:
    int bs(vector<int>& v, int tar, int low, int high) {
        int n = v.size(), mid = 0;
        while (low <= high) {
            mid = (low + high) / 2;
            if (v[mid] == tar)
                return mid;
            else if (v[mid] > tar)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }
    int search(vector<int>& v, int tar) {
        int n = v.size(), low = 0, high = n - 1, mid = 0, ans = -1;
        while (low <= high) {
            mid = (low + high) / 2;       // 3
            int left = (mid - 1 + n) % n; // 2
            int right = (mid + 1) % n;
            if (v[mid] <= v[left] and v[mid] <= v[right]) {
                ans = mid;
                break;
            } else if (v[mid] > v[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return max(bs(v, tar, 0, ans), bs(v, tar, ans, n-1));
    }
};