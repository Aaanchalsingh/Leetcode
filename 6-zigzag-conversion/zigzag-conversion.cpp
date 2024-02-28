class Solution {
public:
    string convert(string s, int n) {
        if (n == 1)
            return s;
        vector<string> rows(n);
        // d is the direction: -1 means go up, 1 means go down
        int j = 0, d = 1;
        for (int i = 0; i < s.size(); i++) {
            rows[j] += s[i];
            // if it reaches to the last row, we need to go up
            if (j == n - 1)
                d = -1;
            // if it reaches to the first row, we need to go down
            else if (j == 0)
                d = 1;
            // move j pointer
            j += d;
        }
        string res = "";
        for (int i = 0; i < n; i++) {
            res += rows[i];
        }
        return res;
    }
};