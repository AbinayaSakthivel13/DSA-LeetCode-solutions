class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /*vector<int> res;
        for(int num:nums)
            res.push_back(num*num);
        sort(res.begin(), res.end());
        return res;*/
        int l=0, r=nums.size()-1;
        vector<int> res(nums.size(),0);
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[l])>abs(nums[r])){
                res[i]=nums[l]*nums[l];
                l++;
            }
            else{
                res[i]=nums[r]*nums[r];
                r--;
            }
        }
        return res;
    }
};