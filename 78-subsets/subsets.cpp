class Solution {
public:
    void solve(int i,vector<int>& v1,vector<vector<int>>& v,int n,vector<int>& nums){
        if(i>=n){
            v.push_back(v1);
            return;
        }
        v1.push_back(nums[i]);
        solve(i+1,v1,v,n,nums);
        v1.pop_back();
        solve(i+1,v1,v,n,nums);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> v1;
        solve(0,v1,v,nums.size(),nums);
        return v;
    }
};