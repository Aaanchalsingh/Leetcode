class Solution {
public:
    int distributeCandies(vector<int>& v) {
        unordered_map<int,int> mp;
        int n=v.size();
        for(int i=0;i<n;i++) mp[v[i]]++;
        int k=mp.size();
        if(k==0) return -1;
        if((n/2)%(k)==0) return k;
        if((n/2)>k) return k%(n/2);
        return (n/2)%(k);
    }
};