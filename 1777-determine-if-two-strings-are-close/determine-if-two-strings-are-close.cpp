class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>v1(26,0),v2(26,0);
        set<char>s1,s2;
        for(char c:word1){
            v1[c-'a']++;
            s1.insert(c);
        }
        for(char c:word2){
            v2[c-'a']++;
            s2.insert(c);
        }
        sort(begin(v1),end(v1));
        sort(begin(v2),end(v2));
        return v1==v2&&s1==s2;
    }
};