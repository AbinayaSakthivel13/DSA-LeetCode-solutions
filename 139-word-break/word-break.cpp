/*class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> memo(s.length(),-1);
        return dfs(s, wordDict, 0, memo);
    }
    bool dfs(const string& s, const vector<string>& wordDict, int ind, vector<int>& memo){
        if(ind==s.length())
            return true;
        if(memo[ind]!=-1)
            return memo[ind];
        for(int i=0;i<wordDict.size();i++){
            int len=wordDict[i].size();
            if(ind+len<=s.size() && s.compare(ind, len, wordDict[i])==0){
                if(dfs(s, wordDict, ind+len, memo))
                    return memo[ind]=true;
            }
        }
        return memo[ind]=false;
    }
};*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        int n = s.size();
        
        vector<bool> dp(n + 1, false);
        dp[0] = true; // base case: empty string is valid

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && dict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};
