class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> numsIndex(n);
        for(int i=0;i<n;i++){
            numsIndex[i]={nums[i],i};
        }
        sort(numsIndex.begin(),numsIndex.end());
        int left=0,right=n-1;
        while(left<=right){
            int sum = numsIndex[left].first+numsIndex[right].first;
            if(sum>target)
                right--;
            else if(sum<target)
                left++;
            else
                return {numsIndex[left].second,numsIndex[right].second};
        }
        return {-1,-1};
    }
};