class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        int min_ele=INT_MAX;
        while(l<=h){
            int m = l +(h-l)/2;
            if(nums[l]<=nums[m]){
                min_ele=min(min_ele,nums[l]);
                l=m+1;
            }
            else if(nums[m]<=nums[h]){
                min_ele=min(min_ele,nums[m]);
                h=m-1;
            }
        }
        return min_ele;
    }
};