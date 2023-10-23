class Solution{
    public: 
        int findMin(vector<int> &v)
        {
            int low = 0;
            int size = v.size();
            int high = v.size() - 1;
            if (v[high] >= v[low])return v[0];
            while (high >= low)
            {
                int mid = (high + low) / 2;
                int prev = (mid + v.size() - 1) % size;
                int next = (mid + 1) % size;
                if (v[mid] <= v[prev] && v[mid] <= v[next])
                    return v[mid];
                else if (v[mid] > v[high]) low = mid + 1;
                else high = mid-1;
            }
            return -1;
        }
};