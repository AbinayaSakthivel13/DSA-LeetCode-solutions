class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1, zeroCount=count(begin(nums),end(nums),0);
        if(zeroCount>1)
            return vector<int>(size(nums));
        for(int num: nums)
            if(num) prod*=num;
        for(int& num: nums){
            if(zeroCount) num = num ? 0: prod;
            else
                num=prod/num;
        }
        return nums;
    }
};