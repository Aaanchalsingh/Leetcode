class Solution {
public:
    int solve(vector<int>& v, int k){
        unordered_map<int,int> mp;
        int n=v.size(),i=0,j=0,cnt=0;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
            while(mp.size()>k){
                mp[v[j]]--;
                if (mp[v[j]] == 0)mp.erase(v[j]);
                j++;
            }
            cnt+=i-j+1;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& v, int k) {
        return solve(v,k)-solve(v,k-1);
    }
};