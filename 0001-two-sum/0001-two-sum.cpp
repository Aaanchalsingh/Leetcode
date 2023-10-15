#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        unordered_map<int,int> mp;
        int last = 0,key=0,val=0;
        vector<int> ans;
        for(int i=0;i<v.size();i++) mp.insert({v[i],i});
        for(int i=0;i<v.size();i++){
            if((mp.count(t-v[i])>0)&&i!=mp[t-v[i]] ){
                ans.push_back(i);
                ans.push_back(mp[t-v[i]]);
                return ans;
            }
        }
        return ans;
    }
};