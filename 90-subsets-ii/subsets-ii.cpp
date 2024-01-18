class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> v;
        int n = nums.size();
        for (int i = 0; i < (1 << n); i++){
            v.clear();
            for (int j = 0; j < n; j++){
                if (i & (1 << j))   
                    v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            ans.insert(v);
        }
        vector<vector<int>> result(ans.begin(),ans.end());
        return result;
    }
};