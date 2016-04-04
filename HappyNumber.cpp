class Solution {
public:
    int next(int x)
    {
        int ret = 0;
        while (x) {
            int t = x % 10;
            ret += t*t;
            x /= 10;
        }
        return ret;
    }
    bool isHappy(int n) {
        int slow = n, fast = n;
        do {
            slow = next(slow);
            fast = next(next(fast));
        }while (slow != fast);
        return slow == 1;
    }
};
