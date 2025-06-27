class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        int curDiff=0,maxDiff=0;
        if(n<2)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            curDiff=abs(nums[i-1]-nums[i]);
            maxDiff=max(maxDiff,curDiff);
        }
        return maxDiff;
    }
};