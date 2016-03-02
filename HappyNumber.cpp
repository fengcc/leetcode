class Solution {
public:
    bool isHappy(int n) {
        if (n <= 0) return false;
        
        while (n > 6) {
            int sum = 0;
            while (n != 0) {
                int x = n % 10;
                sum += x*x;
                n /= 10;
            }
            n = sum;
        }
        
        return n == 1;
    }
};