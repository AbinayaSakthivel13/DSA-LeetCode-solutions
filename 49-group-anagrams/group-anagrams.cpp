class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string str:strs){
            string s=str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>> res;
        for(auto itr:mp)
            res.push_back(itr.second);
        return res;
    }
};