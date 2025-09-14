class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combination;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, 0, target, combination, res);
        return res;
    }
    void backtrack(vector<int>& candidates, int start, int target, vector<int>& combination, vector<vector<int>>& res){
        if(target==0){
            res.push_back(combination);
            return;
        }
        if(target<0)
            return;
        for(int i=start;i<candidates.size();i++){
            if(i>start && candidates[i]==candidates[i-1])
                continue;
            combination.push_back(candidates[i]);
            backtrack(candidates, i+1, target-candidates[i], combination, res);
            combination.pop_back();
        }
    }
};
