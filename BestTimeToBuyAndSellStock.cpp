class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPri = INT_MAX, maxPro = 0;
        int n = prices.size();
        for (int i = 0; i < n; ++i) {
            minPri = min(minPri, prices[i]);
            maxPro = max(maxPro, prices[i] - minPri);
        }
        return maxPro;
    }
};
