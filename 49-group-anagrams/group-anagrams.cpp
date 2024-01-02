class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& v) {
        map<string,vector<string>> mp;
        for(int i=0;i<v.size();i++){
            string s=v[i];
            sort(s.begin(),s.end());
            mp[s].push_back(v[i]);
        }
        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};