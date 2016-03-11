class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int i = a.length()-1, j = b.length()-1, x = 0;
        
        while (i >= 0 || j >= 0 || x == 1) {
            x += i >= 0 ? a[i--] - '0' : 0;
            x += j >= 0 ? b[j--] - '0' : 0;
            result = char(x % 2 + '0') + result;
            x /= 2;
        }
        
        return result;
    }
};
