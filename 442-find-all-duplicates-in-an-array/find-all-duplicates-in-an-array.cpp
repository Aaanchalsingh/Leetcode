class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        vector<int> ans;
        int n=v.size(),cur=0;
        for(int i=0;i<n;i++){
            cur=-v[abs(v[i])-1];
            v[abs(v[i])-1]=cur;
            if(cur>0) ans.push_back(abs(v[i]));
        }
        return ans;
    }
};