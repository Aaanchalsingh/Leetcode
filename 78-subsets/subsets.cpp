class Solution {
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> v;
        int n = nums.size();
        for (int i = 0; i < (1 << n); i++){
            v.clear();
            for (int j = 0; j < n; j++){
                if (i & (1 << j))   v.push_back(nums[j]);
            }
            ans.insert(v);
        }
        vector<vector<int>> result(ans.begin(),ans.end());
        return result;
    }
};