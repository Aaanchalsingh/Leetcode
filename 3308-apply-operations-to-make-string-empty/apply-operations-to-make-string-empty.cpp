class Solution {
public:
    string lastNonEmptyString(string s) {
        int n = s.size(), k = 0;
        string ans = "";
        unordered_map<char, int> mp;
        for (char x : s) {
            mp[x]++;
            k = max(k, mp[x]);
        }
        for (int i = n - 1; i >= 0; i--) {
            if (mp[s[i]] == k) {
                ans=s[i]+ans;
                mp[s[i]]--;
            }
        }
        return ans;
    }
};