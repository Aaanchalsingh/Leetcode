class Solution {
public:
    void Solve(int i, int target, vector<int>& v, vector<vector<int>>& result,
               vector<int>& ans) {
        if (target == 0) {
            result.push_back(ans);
            return;
        }
        for (int j = i; j < v.size(); j++) {
            if (j > i && v[j] == v[j - 1])
                continue;
            if (v[j] > target)
                break;
            ans.push_back(v[j]);
            Solve(j + 1, target - v[j], v, result, ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> ans;
        Solve(0, target, candidates,result, ans);
        return result;
    }
};