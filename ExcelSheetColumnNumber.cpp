class Solution {
public:
    int titleToNumber(string s) {
        int num = 0, n = s.length();
        for (int i = 0; i < n; i++)
            num = num*26 + int(s[i] - 'A' + 1);
        return num;
    }
};