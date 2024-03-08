class Solution {
public:
    int minOperations(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int ind=lower_bound(v.begin(),v.end(),k)-v.begin();
        return ind;
    }
};