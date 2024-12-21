class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int, int>> pr(n);
        for(int i=0;i<n;i++)
            pr[i]={nums[i],i};
        sort(pr.begin(),pr.end());
        int left=0,right=n-1;
        while(left<right){
            int sum=pr[left].first+pr[right].first;
            if(sum<target)
                left++;
            else if(sum>target)
                right--;
            else
                return {pr[left].second,pr[right].second};
        }
        return {-1,-1};
    }
};