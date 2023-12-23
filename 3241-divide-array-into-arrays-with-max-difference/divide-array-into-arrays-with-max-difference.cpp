class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& v, int k) {
        vector<vector<int>> ans;
        sort(v.begin(), v.end());
        for(int i = 2; i < v.size(); i += 3){
            if(v[i] - v[i - 2] > k) return {};
            ans.push_back({v[i-2], v[i-1], v[i]});
        }
        return ans;
    }
};