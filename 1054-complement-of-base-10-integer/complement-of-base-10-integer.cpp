class Solution {
public:
    int bitwiseComplement(int n) {
        if(n<=0) return 1;
        long long int ans=0,t=n,i=0,prev=0;
        while(t){
            if(!(t&1)) ans=ans|(1<<i);
            i++;
            t>>=1;
        }
        return ans;
    }
};