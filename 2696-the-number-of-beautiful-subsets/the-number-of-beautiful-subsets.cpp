class Solution {
public:
    map<int, int> cand;
    int ans = 0;
    void generate(vector<int>& nums, int k, int i){
        if(i == nums.size()) ans++;
        else{
            int l = cand.size();
            if(l == 0 || cand[nums[i]-k] == 0 && cand[nums[i]+k] == 0){
                cand[nums[i]]++;
                generate(nums, k, i+1);
                cand[nums[i]]--;
            }
            generate(nums, k, i+1);
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) 
    {
        generate(nums, k, 0);
        return ans - 1;   
    }
};