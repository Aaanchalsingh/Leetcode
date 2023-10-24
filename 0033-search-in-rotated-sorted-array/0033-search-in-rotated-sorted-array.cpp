class Solution {
public:
    int bs(vector<int>& v, int low, int high, int key) {
        int start = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] == key) {
                start = mid;
                break;
            }
            else if (v[mid] < key) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return start;
    }

    int search(vector<int>& v, int key) {
        int n = v.size();
        int low = 0, high = n - 1, start = -1;

        while (low <= high) {
            if (v[low] <= v[high]) {
                start = low;
                break;
            }

            int mid = low + (high - low) / 2;
            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;

            if (v[mid] <= v[next] && v[mid] <= v[prev]) {
                start = mid;
                break;
            }
            else if (v[mid] <= v[high]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return max(bs(v, 0, start, key), bs(v, start, n - 1, key));
    }
};
