class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curMinSum=nums[0], maxSum=nums[0];
        int curMaxSum=nums[0], minSum=nums[0];
        int totalSum=nums[0];
        for(int i=1;i<nums.size();i++){
            curMaxSum=max(nums[i],curMaxSum+nums[i]);
            maxSum=max(curMaxSum,maxSum);

            curMinSum=min(nums[i],curMinSum+nums[i]);
            minSum=min(curMinSum,minSum);

            totalSum+=nums[i];
        }
        int circularSum=totalSum-minSum;
        if(circularSum==0)
            return maxSum;
        return max(maxSum,circularSum);
    }
};