class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curMax=0;
        int MaxTillNow=INT_MIN;
        for(int i=0;i<n;i++){
            curMax=max(nums[i],curMax+nums[i]);
            MaxTillNow=max(curMax,MaxTillNow);
        }
        return MaxTillNow;
    }
};