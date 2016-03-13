class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        vector<bool> primes(n, true);
        int count = 1;
        int upper = sqrt(n);
        for (int i = 3; i < n; i += 2) {
            if (primes[i]) {
                ++count;
                
                if (i > upper) // 不能去掉，因为当i很大时，下面的i*i可能会溢出，造成j < n
                    continue;
                for (int j = i*i; j < n; j += i)
                    primes[j] = false;
            }
        }
        return count;
    }
};
