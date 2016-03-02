class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 0) return {};
        
        vector<vector<int>> result;
        result.push_back({1});
        for (int i = 1; i < numRows; ++i) {
            result.push_back({1});
            for (int j = 1; j < result[i-1].size(); ++j) {
                result[i].push_back(result[i-1][j-1] + result[i-1][j]);
            }
            result[i].push_back(1);
        }
        
        return result;
    }
};