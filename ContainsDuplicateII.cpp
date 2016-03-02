class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> contents;
        pair<set<int>::iterator,bool> ret;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k)
                contents.erase(nums[i-k-1]);
            if (!((ret = contents.insert(nums[i])).second))
                return true;
        }
        return false;
    }
};