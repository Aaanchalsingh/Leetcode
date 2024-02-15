class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size(),maxi=-1e9,j=0;
        vector<int> ans;
        ans.push_back(v[0]);
        maxi=v[0];
        for(int i=1;i<n;i++){
            if(v[i]>ans[j]){
                ans.push_back(v[i]);
                j++;
            }
            else{
                int index=lower_bound(ans.begin(),ans.end(),v[i])-ans.begin();
                ans[index]=v[i];
            }
        }
        return ans.size();
    }
};