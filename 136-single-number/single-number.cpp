class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int single_ele=0;
        for(int i=0;i<n;i++){
            single_ele^=nums[i];
        }
        return single_ele;
    }
};