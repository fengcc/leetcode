class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> r(n, 1);
        int left, right;
        
        left = right = 1;
        for (int i = 0; i < n; i++)
        {
            r[i] *= left;
            left *= nums[i];
            r[n-i-1] *= right;
            right *= nums[n-i-1];
        }
        
        return r;
    }
};