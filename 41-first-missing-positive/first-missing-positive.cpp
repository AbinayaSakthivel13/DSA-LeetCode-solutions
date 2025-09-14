/*class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int first=1;
        unordered_set<int> numSet(nums.begin(),nums.end());
        for(int i=1;i<INT_MAX;i++){
            if(numSet.find(i)==numSet.end())
                return i;
        }
        return 1;
    }
};*/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Remove irrelevant values
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = 0;
            }
        }

        // Step 2: Mark presence
        for (int i = 0; i < n; i++) {
            int val = abs(nums[i]);
            if (val > 0 && val <= n) {
                if (nums[val - 1] > 0) {
                    nums[val - 1] = -nums[val - 1];     // mark visited
                } else if (nums[val - 1] == 0) {
                    nums[val - 1] = -(n + 1);           // special marker
                }
            }
        }

        // Step 3: Find first missing positive
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                return i + 1;
            }
        }

        // Step 4: If all found
        return n + 1;
    }
};