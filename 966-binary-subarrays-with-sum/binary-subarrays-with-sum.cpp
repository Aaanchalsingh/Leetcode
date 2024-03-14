class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int S) {
        unordered_map<int, int> mp({{0, 1}});
        int sum = 0, res = 0;
        for (int i : v) {
            sum += i;
            res += mp[sum - S];
            mp[sum]++;
        }
        return res;
    }
};