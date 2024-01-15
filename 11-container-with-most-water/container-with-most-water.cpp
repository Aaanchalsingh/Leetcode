class Solution {
public:
    int maxArea(vector<int>& v) {\
        int n = v.size(), j = n - 1, i = 0, m = 0;
        while (i < j)
        {
            int diff = abs(j - i);
            m = max(m, diff * min(v[j], v[i]));
            if (v[j] > v[i])
                i++;
            else if (v[j] < v[i])
                j--;
            else
            {
                j--;
                i++;
            }
        }
        return m;
    }
};