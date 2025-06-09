class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> pr;
        int n=nums.size();
        for(int i=0;i<n;i++)
            pr.push_back({nums[i],i});
        int l=0, r=n-1;
        sort(pr.begin(),pr.end());
        while(l<=r){
            if(pr[l].first+pr[r].first==target)
                return {pr[l].second,pr[r].second};
            else if(pr[l].first+pr[r].first<target)
                l++;
            else
                r--;
        }
        return {-1,-1};
    }
};