class Solution {
public:
    int rob1(vector<int> &num, int start, int end)
    {
        int rob = 0, norob = 0;
        for (int i = start; i <= end; ++i) {
            int cur = norob + num[i];
            norob = max(norob, rob);
            rob = cur;
        }
        return max(rob, norob);
    }
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        return max(rob1(nums, 0, nums.size()-2), rob1(nums, 1, nums.size()-1));
    }
};
