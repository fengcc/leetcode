class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;
        int x = 1, y = 1, stairs = 2, z = 2;
        for (;stairs != n; ++stairs) {
            x = y;
            y = z;
            z = x + y;
        }
        return z;
    }
};