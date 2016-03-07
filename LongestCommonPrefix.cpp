class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0 || strs[0].length() == 0)
            return "";
        
        string str(strs[0]);
        int n = strs.size();
        for (int i = 1; i < n; ++i) {
            string::iterator it1 = str.begin(), it2 = strs[i].begin();
            for (; it1 != str.end() && it2 != strs[i].end(); ++it1, ++it2) {
                if (*it1 != *it2) {
                    str.erase(it1, str.end());
                    break;
                }
            }
            if (it1 != str.end() && it2 == strs[i].end())
                str.erase(it1, str.end());
        }
        return str;
    }
};
