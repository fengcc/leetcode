class Solution {
public:
    string countAndSay(int n) {
        string pre("1"), now;
        
        for (int i = 0; i < n - 1; ++i) {
            char c = pre[0];
            int count = 1;
            for (int j = 1; j < pre.length(); ++j) {
                if (pre[j] != pre[j-1]) {
                    now += to_string(count) + c;
                    c = pre[j];
                    count = 1;
                } else
                    ++count;
            }
            now += to_string(count) + c;
            pre = now;
            now.clear();
        }
        return pre;
    }
};
