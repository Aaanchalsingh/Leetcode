class Solution {
public:
    int minOperations(vector<int>& v) {
        int n=v.size(),c=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)  mp[v[i]]++;
        for(auto m : mp){
            if(m.second==1) return -1;
            c += m.second/3 + (m.second%3 + 1)/2;
        }
        return c;
    }
};