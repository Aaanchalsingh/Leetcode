class Solution {
public:
    int semiOrderedPermutation(vector<int>& v) {
        int n=v.size(),start=-1,end=-1;
        for(int i=0;i<n;i++){
            if(v[i]==1) start = i;
            if(v[i]==n) end = i;
        }
        int ans=0;
        if(start>end) ans=-1;
        ans+=start+n-end-1;
        return ans;
    }
};