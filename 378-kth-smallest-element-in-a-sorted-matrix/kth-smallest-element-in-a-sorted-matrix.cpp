class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
        int m=v.size(),n=v[0].size();vector<int> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans.push_back(v[i][j]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};