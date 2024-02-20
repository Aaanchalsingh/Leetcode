class Solution {
public:
    void solve(int i, vector<int>& v, int target, vector<int>& ans,
               vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(ans);
            return;
        }
        if (i >= v.size())
            return;
        solve(i + 1, v, target, ans, result);
        if (target - v[i] >= 0) {
            ans.push_back(v[i]);
            solve(i, v, target - v[i], ans, result);
            ans.pop_back();
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& v, int target) {
        vector<vector<int>> result;
        vector<int> ans;
        solve(0, v, target, ans, result);
        return result;
    }
};