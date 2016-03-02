class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), profit = 0;
        int buy, sell;
        for (sell = -1; ; )
        {
            for(buy = sell+1; buy+1 < n && prices[buy] >= prices[buy+1]; buy++);
            if (buy >= n - 1) break;
            
            for(sell = buy+1; sell+1 < n && prices[sell] < prices[sell+1]; sell++);
            profit += prices[sell] - prices[buy];
            if(sell == n - 1) break;
        }
        return profit;
    }
};

/*in face, if don't need make times of transactions as small as possible, we can also solve it like this:
for (int i = 1; i < n; i++)
    profit += max([prices[i]-prices[i-1], 0);
return profit;
*/