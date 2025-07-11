class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num: nums)
            freq[num]++;
        for(auto pr:freq){
            if(pr.second>1){
                return true;
                break;
            }
        }
        return false;
    }
};