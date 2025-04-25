 class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        // Create a map to store the frequency of a particular remainder when dividing by 'modulo'.
        map<int, int> mp;

        // Initialize the result variable and 'c' to 0.
        long res = 0, c = 0;

        // Initialize the frequency of remainder 0 to 1 because it's a special case.
        mp[0] = 1;

        // Loop through the elements of 'nums'.
        for (int i : nums) {
            // Check if the remainder of 'i' when divided by 'modulo' is equal to 'k'.
            if (i % modulo == k) {
                c++;  // Increment 'c' if it matches.
            }

            // Calculate the new result by adding the value of 'mp[(c - k + modulo) % modulo]'.
            // This step is crucial and will be explained further below.
            res += mp[(c - k + modulo) % modulo];

            // Increment the frequency of the current remainder 'c % modulo' in the map.
            mp[c % modulo]++;
        }
        
        return res;
    }
};