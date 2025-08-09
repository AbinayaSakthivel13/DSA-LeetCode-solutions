/*class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod1=nums[0], prod2=nums[0], res=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=max({nums[i], nums[i]*prod1, nums[i]*prod2});
            prod2=min({nums[i], nums[i]*prod1, nums[i]*prod2});
            prod1=temp;
            res=max(res,prod1);
        }
        return res;
    }
};*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=*max_element(nums.begin(),nums.end());
        int curMax=1, curMin=1;
        for(int num:nums){
            int temp=curMax*num;
            curMax=max({temp, curMin*num, num});
            curMin=min({temp, curMin*num, num});
            res=max(res, curMax);
        }
        return res;
    }
};