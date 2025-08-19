class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        /*vector<int> res;
        for(int num:nums)
            res.push_back(abs(num-0));
        int ans=*min_element(res.begin(),res.end());
        return ans;
        int min_ele=INT_MAX;
        for(int num:nums){
            if(min_ele > abs(num-0))
                min_ele=min(min_ele,num);
        }
        return min_ele;
        unordered_map<int,int> mp;
        int minDiff=INT_MAX, min_ele=INT_MAX;
        for(int num:nums)
            mp[num]=abs(num-0);
        for(auto pr:mp){
            if(pr.second<minDiff){
                minDiff=min(minDiff,pr.second);
                min_ele=pr.first;
            }
        }
        return min_ele;*/
        int closest=nums[0];
        for(int num:nums){
            if(abs(num)<abs(closest))
                closest=num;
            else if(abs(num)==abs(closest) && num>closest)
                closest=num;
        }
        return closest;
    }
};