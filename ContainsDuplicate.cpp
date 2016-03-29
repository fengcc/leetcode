class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        pair<set<int>::iterator, bool> ret;
        for (int i = 0; i < n; i++)
            if (!((ret = s.insert(nums[i])).second))
                return true;
        return false;
    }
};
// one line : return nums.size() > set<int>(nums.begin(), nums.end()).size();
