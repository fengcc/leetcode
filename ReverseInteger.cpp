class Solution {
public:
    int reverse(int x) {
        int temp = x;
        long long y = 0;
        
        while (temp != 0) {
            y = y*10 + temp%10;
            temp /= 10;
        }
        if (y > INT_MAX || y < INT_MIN)
            return 0;
        return y;
    }
};