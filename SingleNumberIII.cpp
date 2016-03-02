class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // I don't figured it out, this idea is someone else's
        vector<int> ret(2, 0);
        int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
        diff &= -diff;
        for (int num : nums)
            ret[!(num & diff)] ^= num;  //num&diff is 0 or positive number(not always one), so when add "!", it only 1 or 0
        
        return ret;
    }
};