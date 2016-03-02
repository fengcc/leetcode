class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0], n = nums.size();
        for (int i = 1, count = 1; i < n; i++) {
            if (nums[i] == maj)
                count++;
            else
                count--;
                
            if (count == 0) {
                count = 1;
                maj = nums[i];
            }
        }
        return maj;
    }
};