class Solution{
    public: 
        int findMin(vector<int> &v)
        {
            int n = v.size(), low = 0, high = n-1, mid = 0, ans = -1;
            while (low <= high)
            {
                mid = low + (high - low) / 2;
                int left = (mid - 1 + n) % n;
                int right = (mid + 1) % n;
                if ((v[mid] <= v[left]) && (v[mid] <= v[right]))
                {
                    ans = v[mid];
                    break;
                }
                else if (v[mid] > v[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            return ans;
        }
};