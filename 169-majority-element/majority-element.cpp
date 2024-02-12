class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;int n=nums.size();
        for(auto x:nums) mp[x]++;
        for(int i=0;i<n;i++){
            if(mp[nums[i]]>n/2) return nums[i];
        }
        return -1;
    }
};