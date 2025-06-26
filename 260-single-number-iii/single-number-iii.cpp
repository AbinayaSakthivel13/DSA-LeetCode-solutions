class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> res;
        for(int num:nums)
            freq[num]++;
        for(auto num:freq){
            if(num.second==1)
                res.push_back(num.first);
        }
        return res;
    }
};