class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& v, int k) {
        int n=v.size(),count=0,product=1,j=0;
        if(k <= 1) return 0;
        for(int i=0;i<n;i++){
            product*=v[i];
            while(j<n && product >= k){
                product/=v[j++];
            }
            count+=i-j+1;
        }
        return count;
    }
};