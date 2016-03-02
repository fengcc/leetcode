class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.size() == 0) return {};
        
        int n = digits.size(), carry = 1;
        for (int i = n-1; carry != 0 && i >=0; --i) {
            digits[i] += carry;
            if (digits[i] == 10) {
                digits[i] = 0;
                carry = 1;
            } else
                carry = 0;
        }
        if (carry == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};