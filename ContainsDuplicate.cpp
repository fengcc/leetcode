class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            if (s.find(nums[i]) != s.end())
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};
// one line : return nums.size() > set<int>(nums.begin(), nums.end()).size();