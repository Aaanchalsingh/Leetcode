class Solution {
public:
    int getSum(int a, int b) {
        int c; 
        while(b !=0 ) {
            c = (a&b);//for carry
            a = a ^ b;//for generating sum
            b = (c)<<1;//for shifting carry
        }
        return a;
    }
};