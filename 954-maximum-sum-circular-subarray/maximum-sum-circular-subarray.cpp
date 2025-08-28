class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int curMax=nums[0], curMin=nums[0], maxSum=nums[0], minSum=nums[0];
        int total_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            curMax=max(curMax+nums[i], nums[i]);
            maxSum=max(maxSum,curMax);
            curMin=min(curMin+nums[i], nums[i]);
            minSum=min(minSum, curMin);
            total_sum+=nums[i];
        }
        int circular_sum=total_sum-minSum;
        if(circular_sum==0)
            return maxSum;
        return max(maxSum, circular_sum);
    }
};