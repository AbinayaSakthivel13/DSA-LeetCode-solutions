class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        unordered_map<int,int> freq;
        vector<int> res;
        for(int i=0;i<n;i++)
            freq[nums[i]]++;
        for(auto pair:freq){
            if(pair.second>n/3)
                res.push_back(pair.first);
        }
        return res;
    }
};