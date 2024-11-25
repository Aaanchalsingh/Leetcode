class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        int n = v.size(),i = 0,j = n-1;
        while(i<n && j>=0){
            if(v[i]+v[j] == target) return {i+1,j+1};
            else if(v[i]+v[j] > target) j--;
            else i++;
        }
        return {-1,-1};
    }
};