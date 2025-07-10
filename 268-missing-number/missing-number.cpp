class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int exp_tot=n*(n+1)/2;
        for(int num:nums)
            exp_tot=exp_tot-num;
        return exp_tot;
    }
};