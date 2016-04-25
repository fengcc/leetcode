class Solution {
public:
    bool isVowels(char c) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int n = s.length();
        for (int i = 0, j = n-1; i < j; ++i, --j) {
            while (i < j && !isVowels(s[i])) ++i;
            while (i < j && !isVowels(s[j])) --j;
            if (i < j) 
                swap(s[i], s[j]);
        }
        return s;
    }
};
