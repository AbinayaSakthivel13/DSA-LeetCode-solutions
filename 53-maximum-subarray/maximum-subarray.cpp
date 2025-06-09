class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum=0, maxSum=INT_MIN;
        for(int num:nums){
            curSum=max(num, curSum+num);
            maxSum=max(maxSum,curSum);
        }
        return maxSum;
    }
};