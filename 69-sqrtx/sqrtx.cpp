class Solution {
public:
    int mySqrt(int x) {
        long long beg=0,end=x,mid=0;
        while(beg<=end){
            mid=beg-beg/2+end/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) end=mid-1;
            else beg=mid+1;
        }
        return end;
    }
};