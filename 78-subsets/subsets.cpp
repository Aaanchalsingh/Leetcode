class Solution {
public:
    void solve(vector<int>& v, vector<vector<int>>& ans, int i,vector<int>& nums) {
        if (i >= nums.size()) {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        solve(v, ans, i + 1,nums);
        v.pop_back();
        solve(v, ans, i+1,nums);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(v, ans, 0,nums);
        return ans;
    }
};