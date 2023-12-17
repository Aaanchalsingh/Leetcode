class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int key=-1,key2=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                key=i;
                break;
            }
        }
        if(key!=-1){
            for(int i=n-1;i>=0;i--){
                if(nums[key]<nums[i]){
                    key2=i;
                    break;
                }
            }
        }
        if(key2!=-1) swap(nums[key],nums[key2]);
        reverse(nums.begin()+key+1,nums.end());
    }
};