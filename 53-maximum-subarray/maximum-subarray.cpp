class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=-1e9,cur=0;
        for(auto x:nums){
            cur+=x;
            sum=max(sum,cur);
            if(cur<0) cur=0;
        }
        return sum;
    }
};