class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /* 这种方法不用担心整形数溢出 */
        int result = nums.size();
        
        int i=0;
        for(int num:nums){
            result ^= num;
            result ^= i;
            i++;
        }

        return result;
    }
};
