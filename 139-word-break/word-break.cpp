class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> memo(s.length(),-1);
        return dfs(s, wordDict, 0, memo);
    }
    bool dfs(const string& s, const vector<string>& wordDict, int ind, vector<int>& memo){
        if(ind==s.length())
            return true;
        if(memo[ind] != -1) return memo[ind];
        for(int i=0;i<wordDict.size();i++){
            int len=wordDict[i].size();
            if(ind+len<=s.length() && s.compare(ind, len, wordDict[i])==0){
                if(dfs(s, wordDict, ind+len, memo))
                    return memo[ind]=true;
            }
        }
        return memo[ind]=false;
    }
};
