class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t x = 0;
        int count = 32;
        while (count-- > 0) {
            x = x*2 + n%2;
            n /= 2;
        }
        return x;
    }
};