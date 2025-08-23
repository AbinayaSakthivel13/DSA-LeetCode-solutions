class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> freq;
        for(string str:strs){
            string s=str;
            sort(s.begin(),s.end());
            freq[s].push_back(str);
        }
        vector<vector<string>> res;
        for(auto itr:freq){
            res.push_back(itr.second);
        }
        return res;
    }
};