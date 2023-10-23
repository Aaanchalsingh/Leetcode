class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int low = 0, high = v.size() - 1, start = -1, end = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2; // Calculate the middle index to avoid overflow

            if (v[mid] == target) {
                start = mid;
                high = mid - 1;
            } else if (v[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        low = 0;
        high = v.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2; // Calculate the middle index to avoid overflow

            if (v[mid] == target) {
                end = mid;
                low = mid + 1;
            } else if (v[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return {start, end};
    }
};
