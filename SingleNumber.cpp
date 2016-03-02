class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int value = 0, n = nums.size();
        
        for (int i = 0; i < n; i++)
            value = value ^ nums[i];
        
        return value;
    }
};