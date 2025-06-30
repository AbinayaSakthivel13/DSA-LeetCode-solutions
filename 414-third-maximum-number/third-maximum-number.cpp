class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),count=1;
        int max_ele=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]!=nums[i+1])
                count++;
            if(count==3)
                return nums[i];
        }
        return max_ele;
    }
};