class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans = (static_cast<long long>(n) + 2) * (n + 1) / 2;

        for (int i = 0; i < 3; ++i) {
            if ((n -= limit + 1) < 0) return std::max(ans, 0LL); 
            ans -= (i % 2 == 0 ? 3 : -3) * (static_cast<long long>(n) + 2) * (n + 1) / 2;
        }

        return std::max(ans, 0LL); 
    }
    };