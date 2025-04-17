class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        // atleast k pair of indices s.t. a[i] == a[j] for i<j
        // If a number appears p times, then it forms (p * (p - 1)) / 2 such
        // pairs
        int n = nums.size();

        // Total number of subarrays in the array
        long long total = (n * 1ll * (n + 1)) / 2;

        // This will keep count of the subarrays that do NOT have at least k
        // good pairs
        long long notSoGood = 0;

        // Two pointers to define the current subarray
        long long i = 0, j = 0;

        // Map to count how many times each number appears in the current
        // subarray
        unordered_map<int, long long> freq;

        // Number of good pairs in the current subarray
        long long currCount = 0;

        long long a;

        for (; i < n && j < n; j++) {
            a = nums[j];

            // If this number was already in the map, update pair count
            // accordingly
            if (freq.count(a)) {
                currCount -= (freq[a] * 1ll * (freq[a] - 1)) / 2;
                freq[a]++;
                currCount += (freq[a] * 1ll * (freq[a] - 1)) / 2;
            } else {
                // First time seeing this number in the window
                freq[a]++;
            }

            // If we still don't have enough pairs, this subarray isn't good
            if (currCount < k) {
                notSoGood += (j - i + 1);
            } else {
                // Try to shrink the window from the left while still keeping at
                // least k pairs
                while (i < j) {
                    currCount -=
                        (freq[nums[i]] * 1ll * (freq[nums[i]] - 1)) / 2;
                    freq[nums[i]]--;
                    currCount +=
                        (freq[nums[i]] * 1ll * (freq[nums[i]] - 1)) / 2;

                    // Remove the number if its count goes to 0
                    if (freq[nums[i]] == 0) {
                        freq.erase(nums[i]);
                    }

                    i++;

                    // If we now have fewer than k pairs, stop shrinking
                    if (currCount < k) {
                        break;
                    }
                }

                notSoGood += (j - i + 1);
            }
        }

        // Total good subarrays = all subarrays - bad ones
        long long ans = total - notSoGood;

        return ans;
    }
};