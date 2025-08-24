class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int curSum=0, maxSum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            curSum=max(nums[i], curSum+nums[i]);
            maxSum=max(maxSum, curSum);
        }
        return maxSum;*/
        int curSum=0, maxSum=INT_MIN;
        for(int num:nums){
            curSum=max(num, curSum+num);
            maxSum=max(maxSum,curSum);
        }
        return maxSum;
    }
};