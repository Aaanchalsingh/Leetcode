class Solution {
public:
    int maxChunksToSorted(vector<int>& v) {
        int n=v.size(),ans=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            if((i*(i+1))/2==sum) ans++;
        }
        return ans;
    }
};