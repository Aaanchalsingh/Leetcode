class Solution {
public:
    int smallestNumber(int i) {
        int n=1;
        while(i > n){
            n=2*n+1;
        }
        return n;
    }
};