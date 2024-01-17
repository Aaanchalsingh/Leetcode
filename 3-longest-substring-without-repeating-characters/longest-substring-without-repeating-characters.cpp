class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),j=0,ans=0;
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            if(mp.count(s[i])==0){
                ans=max(ans,i-j+1);
                mp[s[i]]++;
            }
            else {
                mp.erase(s[j++]);
                i--;
            }
           
        }
        return ans;
    }
};