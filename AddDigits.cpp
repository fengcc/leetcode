class Solution {
public:
    int addDigits(int num) {
        if (num == 0)
            return 0;
        int t = num % 9;
        if ( t == 0)
            return 9;
        else
            return t;
    }
};