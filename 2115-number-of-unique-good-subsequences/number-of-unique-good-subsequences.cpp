class Solution {
public:
    int mod = 1e9 + 7;
    int numberOfUniqueGoodSubsequences(string binary) {
        long long ends0 = 0; 
        long long ends1 = 0; 
        bool has_zero = false;     

        for (char c : binary) {
            if (c == '0') {
                ends0 = (ends0 + ends1) % mod;
                has_zero = true;
            } else { 
                ends1 = (ends0 + ends1 + 1) % mod;
            }
        }

        long long ans = (ends0 + ends1) % mod;
        if (has_zero) {
            ans = (ans + 1) % mod;
        }

        return ans;
    }
};