class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combinations;
        backtrack(candidates, target, combinations, res, 0);
        return res;
    }
    void backtrack(vector<int>& candidates, int target, vector<int>& combinations, vector<vector<int>>& res, int start){
        if(target==0){
            res.push_back(combinations);
            return;
        }
        if(target<0)
            return;
        for(int i=start;i<candidates.size();i++){
            combinations.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], combinations, res, i);
            combinations.pop_back();
        }
    }
};