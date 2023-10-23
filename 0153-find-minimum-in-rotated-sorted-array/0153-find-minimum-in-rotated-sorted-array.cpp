class Solution{
    public: 
        int findMin(vector<int> &v)
        {
            int low = 0,n = v.size(),high = v.size() - 1;
            if (v[high] >= v[low])return v[0];
            while (high >= low)
            {
                int mid = low+(high - low) / 2;
                int prev = (mid + n - 1) % n;
                int next = (mid + 1) % n;
                if (v[mid] <= v[prev] && v[mid] <= v[next])
                    return v[mid];
                else if (v[mid] > v[high]) low = mid + 1;
                else high = mid-1;
            }
            return -1;
        }
};