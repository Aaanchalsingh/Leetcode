class Solution {
public:
    bool canweplace(vector<int>& v, int k, int target, int n){
        long long int sum = 0, c = 1;
        k--;
        for (int i = 0; i < n; i++){
            if (v[i] > target)
                return false;
            if (sum + v[i] > target){
                sum = 0;
                k--;
            }
            sum += v[i];
        }
        return k >= 0;
    }
    int splitArray(vector<int>& v, int k) {
        int n=v.size(),sum = 0, mini = 1e9;
        for (int i = 0; i < n; i++){
            sum += v[i];
            mini = min(mini, v[i]);
        }
        int low = mini, high = sum, mid = 0, ans = -1;
        if (k > n)
            return -1;
        while (low <= high){
            mid = low + (high - low) / 2;
            if (canweplace(v, k, mid, n)){
                ans = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return ans;
    }
};