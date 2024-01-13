class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v1(27,0),v2(27,0);int count=0;
        for(auto x:s){
            v1[x-'a']++;
        }
        for(auto x:t){
            v2[x-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(v2[t[i]-'a']<v1[t[i]-'a']){
                count+=abs(v2[t[i]-'a']-v1[t[i]-'a']);
                v2[t[i]-'a']=v1[t[i]-'a'];
            }
            if(v2[s[i]-'a']==0) count++;
        }
        return count;
    }
};