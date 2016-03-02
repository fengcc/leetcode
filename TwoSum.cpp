class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> map_nums;
		int index1, index2;

		for (int i = 0; i < nums.size(); i++)
		{
			multimap<int, int>::iterator iter;
			if ((iter = map_nums.find(target - nums[i])) != map_nums.end())
			{
				index2 = i + 1;
				index1 = iter->second + 1;
				break;
			}
			else
				map_nums.insert(pair<int, int>(nums[i], i));
		}	       

        vector<int> result;
        result.push_back(index1);
        result.push_back(index2);
        
        return result;
    }
};