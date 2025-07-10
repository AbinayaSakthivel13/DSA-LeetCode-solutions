class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, buys=prices[0];
        for(int sell:prices){
            profit=max(profit,sell-buys);
            buys=min(buys,sell);
        }
        return profit;
    }
};