class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> v(26,0);int count=0;
        for(auto x:s){
            v[x-'a']++;
        }
        for(auto x:t){
            v[x-'a']--;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]<0) count+=abs(v[i]);
        }
        return count;
    }
};