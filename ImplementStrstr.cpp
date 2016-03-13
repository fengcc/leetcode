class Solution {
public:
    vector<int> getNext(string needle) {
        vector<int> next(needle.length(), -1);
        int i = 0, j = -1;
        while (i < needle.length() - 1) {
            if (j == -1 || needle[i] == needle[j]) {
                ++i;
                ++j;
                next[i] = j;
            }
            else
                j = next[j];
        }
        return next;
    }
    int strStr(string haystack, string needle) {
        if (needle.length() == 0)
            return 0;
        
        vector<int> next = getNext(needle);
        int lenh = haystack.length(), lenn = needle.length();
        int i = 0, j = 0;
        
        while (i < lenh && j < lenn) {
            if (j == -1 || haystack[i] == needle[j]) {
                ++i;
                ++j;
            }
            else
                j = next[j];
        }
        
        if (j >= lenn) 
            return i - lenn;
        else 
            return -1;
    }
};
