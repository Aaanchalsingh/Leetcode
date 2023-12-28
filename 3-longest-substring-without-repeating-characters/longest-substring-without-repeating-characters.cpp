class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), maxlen = 0, len = 0, i = 0, j = 0;
        unordered_set<char> st;
        while (i < n && j < n) {
            if (st.count(s[i]) == 0) {
                st.insert(s[i++]);
                len = i - j;
                maxlen = max(maxlen, len);
            } 
            else st.erase(s[j++]);
        }
        return maxlen;
    }
};