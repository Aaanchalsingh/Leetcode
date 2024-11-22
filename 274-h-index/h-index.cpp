class Solution {
public:
    int hIndex(vector<int>& v) {
        int n= v.size(),ans=0;
        sort(v.begin(),v.end());
        for(int i =0;i<n;i++){
            if(n-i<=v[i]) 
                ans=max(ans,n-i);
        }
        return ans;
    }
};