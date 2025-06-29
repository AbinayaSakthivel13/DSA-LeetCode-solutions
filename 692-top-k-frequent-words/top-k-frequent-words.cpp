class Solution {
public:
    class cmp{
        public:
            bool operator()(pair<int, string> &a, pair<int, string> &b){
                if(a.first!=b.first)
                    return a.first<b.first;
                return a.second>b.second;
            }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;
        for(auto it: words)
            freq[it]++;
        for(auto it: freq)
            pq.push({it.second,it.first});
        vector<string> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};