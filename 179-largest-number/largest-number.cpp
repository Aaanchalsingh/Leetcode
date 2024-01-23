class Solution {
public:
    static bool cmp(int a, int b) {
        string x = to_string(a);
        string y = to_string(b);
        return (x + y) > (y + x);
    }
    string largestNumber(vector<int>& v) {
        sort(v.begin(), v.end(), cmp);
        string ans = "";
        if (v[0] == 0)
            return "0";
        for (auto x : v)
            ans += to_string(x);
        return ans;
    }
}
;