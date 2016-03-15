class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.size() == 0) return {};
        
        vector<string> result;
        int n = nums.size();
        string s;
        
        for (int i = 0, j = 1; i < n; ) {
            while (j < n && nums[j] == nums[j - 1] + 1) ++j;
            
            if (i < j - 1)
                s = to_string(nums[i]) + "->" + to_string(nums[j - 1]);
            else
                s = to_string(nums[i]);
            result.push_back(s);
            s.clear();
            
            i = j;
            ++j;
        }
        
        return result;
    }
};
