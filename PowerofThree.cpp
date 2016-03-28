class Solution {
public:
    bool isPowerOfThree(int n) {
        return n == 0 ? false : abs(fmod((log10(n) / log10(3)), 1)) < numeric_limits<double>::min();
    }
};
