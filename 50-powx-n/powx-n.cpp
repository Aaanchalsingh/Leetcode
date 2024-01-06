class Solution {
public:
    double myPow(double a, int b) {
        double ans=1;bool neg=false;
        if(b<0){
            neg=true;
            b=abs(b);
        }
        while(b>0){
            if(b&1) ans*=a;
            a*=a;
            b>>=1;
        }
        if(neg) return 1/ans;
        return ans;
    }
};