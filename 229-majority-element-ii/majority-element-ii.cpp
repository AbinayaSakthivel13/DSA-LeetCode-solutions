class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        vector<int> res;
        for(int num: nums) 
            freq[num]++;
        int half_n=n/3;
        half_n=floor(half_n);
        for(auto num: freq){
            if(num.second>half_n)
                res.push_back(num.first);
        }
        return res;
    }
};