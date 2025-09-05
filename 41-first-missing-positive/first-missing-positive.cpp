class Solution {
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
};