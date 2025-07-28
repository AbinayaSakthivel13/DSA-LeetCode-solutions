class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> freq;
        for(int num:nums)
            freq[num]++;
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==0)
                res.push_back(i);
            else if(freq[i]>1)
                res.insert(res.begin(),i);
        }
        return res;
    }
};