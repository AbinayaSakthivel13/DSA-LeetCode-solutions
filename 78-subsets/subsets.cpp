class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        helper(nums, 0, res, subset);
        return res;
    }
    void helper(vector<int>& nums, int ind, vector<vector<int>>& res, vector<int>& subset){
        if(ind==nums.size()){
            res.push_back(subset);
            return;
        }
        helper(nums, ind+1, res, subset);
        subset.push_back(nums[ind]);
        helper(nums, ind+1, res, subset);
        subset.pop_back();
    }
};