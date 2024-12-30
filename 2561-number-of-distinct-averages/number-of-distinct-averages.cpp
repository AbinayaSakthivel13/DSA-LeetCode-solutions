class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        set<double> avgSet;
        while(left<=right){
            double avg = (nums[left]+nums[right])/2.0;
            avgSet.insert(avg);
            left++;
            right--;
        }
        return avgSet.size();
    }
};