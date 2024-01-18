class Solution {
public:
    int singleNumber(vector<int>& v){
        int n = v.size(),ans=0,sum=0;
        for (int i = 0; i < 32; i++){
            sum = 0;
            for (int j = 0; j < n; j++){
                sum += (v[j] & 1);
                v[j]>>= 1;
            }
            ans+=((sum%3)<<i);
        }
        return ans;
    }
};