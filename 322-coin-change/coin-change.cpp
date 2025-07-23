class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT32_MAX);
        dp[0]=0;
        for(int i=0;i<=amount;i++){
            for(int coin: coins){
                if(coin>i || dp[i-coin]==INT32_MAX)
                    continue;
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
        return dp[amount]==INT32_MAX?-1:dp[amount];
    }
};