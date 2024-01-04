class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0){
            return false;
        }
        long long int k=pow(3,19);
        return ((k) % n == 0);
    }
};