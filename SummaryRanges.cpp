class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        for (int s = 0, i = 0; i < n; ++i) {
            if (i == n-1 || nums[i] + 1 != nums[i+1]) {
                string str = to_string(nums[s]);
                if (s != i) str += "->" + to_string(nums[i]);
                result.push_back(str);
                s = i + 1;
            }
        }
        return result;
    }
};
