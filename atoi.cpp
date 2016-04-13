class Solution {
public:
    int myAtoi(string str) {
        int len = str.length();
        int i = 0;
        
        while (i < len && str[i] == ' ') ++i;
        
        if (i == len) return 0;
        
        int flag = 1;
        if (str[i] == '-' || str[i] == '+') {
            flag = 1 - 2 * (str[i] == '-');
            ++i;
        }
        
        long ret = 0;
        for (; i < len && isdigit(str[i]); ++i) {
            ret = ret * 10 + (str[i] - '0');
            if ((flag == 1 && ret > INT_MAX) || flag == -1 && flag * ret < INT_MIN)
                return flag == 1 ? INT_MAX : INT_MIN;
        }
        return flag * ret;
    }
};
