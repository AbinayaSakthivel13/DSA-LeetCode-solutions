class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grouping;
        for(string s: strs){
            string ss=s;
            sort(ss.begin(),ss.end());
            grouping[ss].push_back(s);
        }
        vector<vector<string>> res;
        for(auto s: grouping){
            res.push_back(s.second);
        }
        return res;
    }
};