class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),i=0,j=0,ans=0;
        set<char> st;
        while(i<n&&j<n){
            if(st.count(s[i])==0){
                st.insert(s[i++]);
                int p=i-j;
                ans=max(ans,p);
            }
            else st.erase(s[j++]);
        }
        return ans;
    }
};