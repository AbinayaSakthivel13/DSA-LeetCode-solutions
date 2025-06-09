class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int exp_tot=n*(n+1)/2;
        int act_tot=0;
        for(int num:nums)
            act_tot+=num;
        return exp_tot-act_tot;
    }
};