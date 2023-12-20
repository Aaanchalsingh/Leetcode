class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& v, int tar, int value) {
        int n= v.size();
        set<int> st(v.begin(),v.end());
        if(value==0&&n==st.size()) return false;
        for(int i=0;i<n;i++){
            for(int k=i+1;k<n;k++){
                if(abs(i-k)<=tar &&i!=k){
                  if(abs((long long)v[i]-v[k])<=value) return true;
                } 
            }
        }
        return false;
    }
};