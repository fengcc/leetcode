class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        int n = s.size();
        
        for (int i = 0; i < n; ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                temp.push(s[i]);
            else {
                if (temp.empty())
                    return false;
                char t = temp.top();
                temp.pop();
                if (t == '(' && s[i] != ')'
                    || t == '{' && s[i] != '}'
                    || t == '[' && s[i] != ']')
                    return false;
            }
        }
        if (!temp.empty())
            return false;
        return true;
    }
};