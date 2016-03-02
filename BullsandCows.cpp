class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();
        int flags[10] = {0};
        int bulls = 0, cows = 0;
        
        for (int i = 0; i < n; ++i) {
            if (secret[i] == guess[i])
                ++bulls;
            else {
                if (flags[secret[i] - '0']++ < 0) ++cows;
                if (flags[guess[i] - '0']-- > 0) ++cows;
            }
        }
        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
};
