class Solution {
public:
    bool isPowerOfFour(int k) {
        if (k == 0) return false;
        while (k % 4 == 0) {
            k /= 4;
        }
        return k == 1;
    }
};