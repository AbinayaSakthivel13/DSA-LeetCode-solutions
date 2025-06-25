class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int, char>> pq;
        for(char ch: s)
            mp[ch]++;
        for(auto i:mp){
            char ch=i.first;
            int freq=i.second;
            pq.push({freq, ch});
        }
        string res="";
        while(!pq.empty()){
            auto i=pq.top();
            pq.pop();
            res.append(i.first, i.second);
        }
        return res;
    }
};