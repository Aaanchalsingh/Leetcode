class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> right(n,1);
        int last=1;
        for(int i=n-2;i>=0;i--)right[i]=right[i+1]*nums[i+1];
        for(int i=1;i<n;i++) {
            last=last*nums[i-1];
            right[i]=last*right[i];
        }
        return right;
    }
};