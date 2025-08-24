class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int zeroes=0, ans=0;
        for(int l=0,r=0;r<n;r++){
            zeroes+=(nums[r]==0);
            while(zeroes>1 && nums[l++]==0)
                zeroes--;
            ans=max(ans,r-l);
        }
        return ans;
    }
};