class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        if (n == 0) return 0;
        unordered_map<char,int> mp;
        int j = 0, count = 0;
        for (int i = 0; i <n;i++) {
            count = max(count, ++mp[s[i]]);
            if (i-j+1-count > k) 
                mp[s[j++]]--;
        }
        return n - j;
    }
};