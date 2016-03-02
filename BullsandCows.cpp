class Solution {
public:
    string getHint(string secret, string guess) {
        multiset<char> s, g;
        multiset<char>::iterator it;
        int count_A = 0, count_B = 0;
        int n = secret.length();
        
        for (int i = 0; i < n; ++i) {
            if (secret[i] == guess[i])
                ++count_A;
            else {
                if ((it = g.find(secret[i])) != g.end()) {
                    ++count_B;
                    g.erase(it);
                } else 
                    s.insert(secret[i]);
                    
                if ((it = s.find(guess[i])) != s.end()) {
                    ++count_B;
                    s.erase(it);
                } else
                    g.insert(guess[i]);
            }
        }
        char ret[5];
        sprintf(ret, "%dA%dB", count_A, count_B);
        return ret;
    }
};
