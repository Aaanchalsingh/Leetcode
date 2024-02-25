class Solution {
public:
    int solve(int n, int target) {
        if (n == 0 || target == 0)
            return 1;
        if (target > n)
            return solve(n, target - 1);
        return max((target * solve(n - target, target)), solve(n, target - 1));
    }
    int integerBreak(int n) { 
        return solve(n, n - 1);
    }
};