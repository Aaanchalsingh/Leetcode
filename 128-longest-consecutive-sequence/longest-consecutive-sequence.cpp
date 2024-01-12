class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int n = v.size(),c = 0, ans = 1;
        unordered_set<int> st(v.begin(),v.end());
        for (int i = 0; i < n; i++)
        {
            int key = v[i];
            c = 1;
            if(!st.count(key-1)){
                while (st.count(key+1)){
                    c++;
                    key++;
                }
                ans = max(ans, c);
            }
        }
        if(n==0) return 0;
        return ans;
    }
};