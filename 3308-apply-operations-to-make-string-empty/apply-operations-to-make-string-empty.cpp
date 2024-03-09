class Solution {
public:
    string lastNonEmptyString(string s) {
        int n = s.size(), k = 0;
        string ans = "";
        vector<int> v(27,0);
        for (char x : s) {
            v[x-'a']++;
            k = max(k, v[x-'a']);
        }
        for (int i = n - 1; i >= 0; i--) {
            if (v[s[i]-'a'] == k) {
                ans=s[i]+ans;
                v[s[i]-'a']--;
            }
        }
        return ans;
    }
};