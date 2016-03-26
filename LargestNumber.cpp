class Solution {
public:
    static bool mycmp(int x, int y)
    {
        string strx = to_string(x), stry = to_string(y);
        return strx + stry > stry + strx;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), mycmp);
        string result;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0 && result.length() == 0)
                continue;
            result += to_string(nums[i]);   
        }
        if (result.length() == 0 && nums.size() != 0)
            return "0";
        return result;
    }
};
