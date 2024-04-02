class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        else{
            unordered_map<char,char> a;
            unordered_map<char,char> b;
            for(int i=0;i<s.size();i++){
                if(a[s[i]]&&a[s[i]]!=t[i]) return false;
                if(b[t[i]]&&b[t[i]]!=s[i]) return false;
                a[s[i]]=t[i];
                b[t[i]]=s[i];
            }
        }
        return true;
    }
};